/*
 * EX3.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Ahmed
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	float x,y;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);
	return 0;
}
