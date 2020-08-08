#!/usr/bin/env python
# -*- coding: utf-8 -*-
###########################################################
#               WARNING: Generated code!                  #
#              **************************                 #
# Manual changes may get lost if file is generated again. #
# Only code inside the [MANUAL] tags will be kept.        #
###########################################################

from flexbe_core import Behavior, Autonomy, OperatableStateMachine, ConcurrencyContainer, PriorityContainer, Logger
from hrwros_factory_states.set_conveyor_power_state import SetConveyorPowerState
from hrwros_factory_states.compute_grasp_state import ComputeGraspState
from hrwros_factory_states.vacuum_gripper_control_state import VacuumGripperControlState
from hrwros_factory_states.moveit_to_joints_dyn_state import MoveitToJointsDynState as hrwros_factory_states__MoveitToJointsDynState
from hrwros_factory_states.detect_part_camera_state import DetectPartCameraState
# Additional imports can be added inside the following tags
# [MANUAL_IMPORT]

# [/MANUAL_IMPORT]


'''
Created on Tue Jun 30 2020
@author: ABU BAKR SIDDIQ
'''
class PickpartfromconveyorSM(Behavior):
	'''
	this is behaviour to pick a part from conveyour belt using robot1
	'''


	def __init__(self):
		super(PickpartfromconveyorSM, self).__init__()
		self.name = 'Pick part from conveyor'

		# parameters of this behavior

		# references to used behaviors

		# Additional initialization code can be added inside the following tags
		# [MANUAL_INIT]

		# [/MANUAL_INIT]

		# Behavior comments:



	def create(self):
		pick_group = 'robot1'
		home1 = [1.24,-1.57,1.57,-1.57,-1.57,0]
		gripper1 = "vacuum_gripper1_suction_cup"
		names1 = ["robot1_shoulder_pan_joint","robot1_shoulder_lift_joint","robot1_elbow_joint","robot1_wrist_1_joint","robot1_wrist_2_joint","robot1_wrist_3_joint"]
		# x:782 y:543, x:76 y:559
		_state_machine = OperatableStateMachine(outcomes=['finished', 'failed'])
		_state_machine.userdata.part_pose = []
		_state_machine.userdata.pick_configuration = []
		_state_machine.userdata.home1 = home1
		_state_machine.userdata.conveyor_speed = 100

		# Additional creation code can be added inside the following tags
		# [MANUAL_CREATE]

		# [/MANUAL_CREATE]


		with _state_machine:
			# x:30 y:122
			OperatableStateMachine.add('Start conveyor',
										SetConveyorPowerState(stop=False),
										transitions={'succeeded': 'Detect part', 'failed': 'failed'},
										autonomy={'succeeded': Autonomy.Off, 'failed': Autonomy.Off},
										remapping={'speed': 'conveyor_speed'})

			# x:323 y:107
			OperatableStateMachine.add('Compute pick configuration',
										ComputeGraspState(group=pick_group, offset=0.0, joint_names=names1, tool_link=gripper1, rotation=3.1415),
										transitions={'continue': 'Move Robot1 to pick', 'failed': 'failed'},
										autonomy={'continue': Autonomy.Off, 'failed': Autonomy.Off},
										remapping={'pose': 'part_pose', 'joint_values': 'pick_configuration', 'joint_names': 'joint_names'})

			# x:543 y:315
			OperatableStateMachine.add('Activate gripper',
										VacuumGripperControlState(enable=True, service_name='/gripper1/control'),
										transitions={'continue': 'Move Robot1 to home configuration', 'failed': 'failed'},
										autonomy={'continue': Autonomy.Off, 'failed': Autonomy.Off})

			# x:396 y:203
			OperatableStateMachine.add('Move Robot1 to pick',
										hrwros_factory_states__MoveitToJointsDynState(move_group=pick_group, offset=0.0, tool_link=gripper1, action_topic='/move_group'),
										transitions={'reached': 'Activate gripper', 'planning_failed': 'failed', 'control_failed': 'failed'},
										autonomy={'reached': Autonomy.Off, 'planning_failed': Autonomy.Off, 'control_failed': Autonomy.Off},
										remapping={'joint_values': 'pick_configuration', 'joint_names': 'joint_names'})

			# x:685 y:384
			OperatableStateMachine.add('Move Robot1 to home configuration',
										hrwros_factory_states__MoveitToJointsDynState(move_group=pick_group, offset=0.0, tool_link=gripper1, action_topic='/move_group'),
										transitions={'reached': 'finished', 'planning_failed': 'failed', 'control_failed': 'failed'},
										autonomy={'reached': Autonomy.Off, 'planning_failed': Autonomy.Off, 'control_failed': Autonomy.Off},
										remapping={'joint_values': 'home1', 'joint_names': 'joint_names'})

			# x:212 y:37
			OperatableStateMachine.add('Detect part',
										DetectPartCameraState(ref_frame='robot1_base', camera_topic='/hrwros/logical_camera_1', camera_frame='logical_camera_1_frame'),
										transitions={'continue': 'stop conveyor', 'failed': 'failed'},
										autonomy={'continue': Autonomy.Off, 'failed': Autonomy.Off},
										remapping={'pose': 'part_pose'})

			# x:585 y:26
			OperatableStateMachine.add('stop conveyor',
										SetConveyorPowerState(stop=True),
										transitions={'succeeded': 'Compute pick configuration', 'failed': 'failed'},
										autonomy={'succeeded': Autonomy.Off, 'failed': Autonomy.Off},
										remapping={'speed': 'conveyor_speed'})


		return _state_machine


	# Private functions can be added inside the following tags
	# [MANUAL_FUNC]

	# [/MANUAL_FUNC]
