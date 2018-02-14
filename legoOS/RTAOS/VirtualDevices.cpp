#include "vrtaCore.h"
#include "vrtaSampleDevices.h"
#include "vrtaLoggerDevice.h"
#include "VirtualDevices.h"


vrtaSensor AccelSensor("AccelSensor");
vrtaActuator CylinderActuator("Actuator");
vrtaSensor Input("Input");
vrtaActuator DriverActuator("DriverActuator");


int AccelSensorValue(void){
	return AccelSensor.Value();    ///send
}

int InputValue(void){
	return Input.Value();
}

void setActuatorLevel(int level){
	CylinderActuator.SetValue(level);
}

void setDrDoorActuator(int level){
	DriverActuator.SetValue(level);
}



Logger Status("Status");

int status_printf(const vrtaTextPtr format, ...){

	va_list argptr;
	va_start(argptr, format);
	int ret = Status.printf(format, argptr);
	va_end(argptr);
	return ret;


}
