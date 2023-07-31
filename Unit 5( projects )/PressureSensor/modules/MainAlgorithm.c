/*
 * MainAlgorithm.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Ahmed
 */
#include "MainAlgorithm.h"
#include "driver/driver.h"

int highPressureDetected(){
	int threshold = 20;
	if(getPressureVal()>threshold){
		return 1;
	}
	return 0;
}

