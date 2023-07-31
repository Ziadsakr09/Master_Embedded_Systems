/*
 * AlarmMonitor.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Ahmed
 */
#include "AlarmMonitor.h"
#include "state.h"
#include "driver.h"
#include "MainAlgorithm.h"

STATE_DEFINE(AlarmON);
STATE_DEFINE(AlarmOFF);
void (*Current_Alarm_State)();

void init_Alarm(){
	Current_Alarm_State = STATE(AlarmOFF);
}

void StartAlarm()
{
	Set_Alarm_actuator(0);
}


void StopAlarm()
{
	Set_Alarm_actuator(1);
}

STATE_DEFINE(AlarmON)
{
	StartAlarm();
	/*Keep the LED on for 60 seconds8*/
	Delay(500000);
	StopAlarm();
	/*set delay to show that the LED stops after 60 seconds*/
	Delay(500000*2);
	Current_Alarm_State = STATE(AlarmOFF);
}


STATE_DEFINE(AlarmOFF)
{

	if(highPressureDetected())
		Current_Alarm_State = STATE(AlarmON);
	else
		Current_Alarm_State = STATE(AlarmOFF);
	StopAlarm();

}
