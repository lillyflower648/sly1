#include <sensor.h>

void InitSensor(SENSOR* psensor)
{
	InitSo(&psensor->SENSOR);
	psensor->sensm   = SENSM_SenseOnly;
	psensor->sensors = SENSORS_Nil;
}

void GetSensorParams(SENSOR* psensor, SOP** ppsop)
{

}

void SetSensorAlarm(SENSOR* psensor, ALARM *palarm)
{
	psensor->palarm = palarm;
}

void SetSensorSensors(SENSOR* psensor, SENSORS sensors)
{

}

int FCheckSensorObject(SENSOR* psensor, SO* psoOther)
{
	return 0;
}

int FIgnoreSensorObject(SENSOR* psensor, SO* psoOther)
{
	return 0;
}

int FOnlySensorTriggerObject(SENSOR* psensor, SO* psoOther)
{
	return 0;
}

void PauseSensor(SENSOR* psensor)
{

}

void UpdateSensor(SENSOR* psensor, float dt)
{

}

void AddSensorTriggerObject(SENSOR* psensor, OID oid)
{

}

void AddSensorNoTriggerObject(SENSOR* psensor, OID oid)
{

}

void AddSensorTriggerClass(SENSOR* psensor, CID cid)
{

}

void AddSensorNoTriggerClass(SENSOR* psensor, CID cid)
{

}

void SenseLasen(LASEN* plasen, SENSORS* psensors)
{

}

void SetLasenSensors(LASEN* plasen, SENSORS sensors)
{

}

void SenseCamsen(CAMSEN* pcamsen, SENSORS* psensors)
{

}

void SetCamsenSensors(CAMSEN* pcamsen, SENSORS sensors)
{

}

void SensePrsen(PRSEN* pprsen, SENSORS* psensors)
{

}

void SetPrsenSensors(PRSEN* pprsen, SENSORS sensors)
{

}
