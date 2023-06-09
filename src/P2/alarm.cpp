#include <alarm.h>

void BreakAlbrk(ALBRK* palbrk)
{
	
}

void SetAlbrkAlarm(ALBRK* palbrk, ALARM* palarm)
{

}

void InitAlarm(ALARM* palarm)
{
	
}

void PostAlarmLoad(ALARM* palarm)
{

}

void CloneAlarm(ALARM* palarm, ALARM* palarmBase)
{

}

void UpdateAlarm(ALARM* plarm, float dt)
{

}

void GetAlarmParams(ALARM* palrm, SOP** ppsop)
{

}

void SetAlarmAlarms(ALARM* palarm, ALARMS alarms)
{

}

void TriggerAlarm(ALARM* palrm, ALTK altk)
{

}

void DisableAlarmAlbrk(ALARM* palarm)
{

}

void EnableAlarmSensors(ALARM* palarm)
{

}

void DisableAlarmSensors(ALARM* palarm)
{
	/*for (int i = 0; i < palarm->cpsensors; i++)
		SENSOR** sensor = palarm->apsensors;*/
}

void NotifyAlarmSensorsOnTrigger(ALARM* palarm)
{

}

void AddAlarmAlbrk(ALARM* palarm, OID oid)
{

}

void AddAlarmSensor(ALARM* palarm, OID oid)
{

}

void AddAlarmStepguard(ALARM* palarm, OID oid)
{

}

void SetAlarmRsmg(ALARM* palarm, int fOnTrigger, OID oidRoot, OID oidSM, OID oidGoal)
{

}

int FGetAlarmSensorList(ALARM* palarm, void* pvstate)
{
	return 0;
}
