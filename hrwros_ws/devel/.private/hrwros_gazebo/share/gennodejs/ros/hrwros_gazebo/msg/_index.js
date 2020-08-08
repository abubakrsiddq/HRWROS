
"use strict";

let DetectedObject = require('./DetectedObject.js');
let KitTray = require('./KitTray.js');
let Kit = require('./Kit.js');
let StorageUnit = require('./StorageUnit.js');
let Order = require('./Order.js');
let ConveyorBeltState = require('./ConveyorBeltState.js');
let PopulationState = require('./PopulationState.js');
let VacuumGripperState = require('./VacuumGripperState.js');
let Proximity = require('./Proximity.js');
let TrayContents = require('./TrayContents.js');
let LogicalCameraImage = require('./LogicalCameraImage.js');
let Model = require('./Model.js');
let KitObject = require('./KitObject.js');

module.exports = {
  DetectedObject: DetectedObject,
  KitTray: KitTray,
  Kit: Kit,
  StorageUnit: StorageUnit,
  Order: Order,
  ConveyorBeltState: ConveyorBeltState,
  PopulationState: PopulationState,
  VacuumGripperState: VacuumGripperState,
  Proximity: Proximity,
  TrayContents: TrayContents,
  LogicalCameraImage: LogicalCameraImage,
  Model: Model,
  KitObject: KitObject,
};
