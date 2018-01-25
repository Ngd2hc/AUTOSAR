#include "vrtaCore.h"
#include "vrtaSampleDevices.h"
#include "vrtaLoggerDevice.h"
#include "VirtualDevices.h"


vrtaSensor AccelSensor("AccelSensor");
vrtaActuator CylinderActuator("Actuator");



int AccelSensorValue(void){
	return AccelSensor.Value();
}



void setActuatorLevel(int level){
	CylinderActuator.SetValue(level);
}


Logger Status("Status");

int status_printf(const vrtaTestPtr format, ...){

	va_list argptr;
	va_start(argptr, format);
	int ret = Status.printf(format, argptr);
	va_end(argptr);
	return ret;


}
