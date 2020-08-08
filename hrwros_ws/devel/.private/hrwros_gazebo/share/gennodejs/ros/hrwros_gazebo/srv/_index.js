
"use strict";

let AGVControl = require('./AGVControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')
let SubmitTray = require('./SubmitTray.js')
let PopulationControl = require('./PopulationControl.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let ConveyorBeltControl = require('./ConveyorBeltControl.js')

module.exports = {
  AGVControl: AGVControl,
  GetMaterialLocations: GetMaterialLocations,
  SubmitTray: SubmitTray,
  PopulationControl: PopulationControl,
  VacuumGripperControl: VacuumGripperControl,
  ConveyorBeltControl: ConveyorBeltControl,
};
