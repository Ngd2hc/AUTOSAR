#ifdef __cplusplus
extern "C" {
#endif


extern int status_printf(const vrtaTextPtr format, ...);
extern int AccelSensorValue(void);
extern void setActuatorLevel(int level);
extern int InputValue(void);
extern void setDrDoorActuator(int level);

#ifdef __cplusplus
}

#endif
