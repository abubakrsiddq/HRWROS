execute_process(COMMAND "/home/abu/hrwros_ws/build/hrwros_factory_states/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/abu/hrwros_ws/build/hrwros_factory_states/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
