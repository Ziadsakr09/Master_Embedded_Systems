/*
 * AlarmMonitor.h
 *
 *  Created on: Jul 31, 2023
 *      Author: Ahmed
 */

#ifndef ALARMMONITOR_H_
#define ALARMMONITOR_H_

#include "state.h"
STATE_DEFINE(AlarmON);
STATE_DEFINE(AlarmOFF);
void init_Alarm();

#endif /* ALARMMONITOR_H_ */
