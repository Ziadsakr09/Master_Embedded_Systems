/*
 * EX3 C Program to find the largest number *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	float a, b, c,max=0;

	printf("Enter 3 numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &a,&b,&c);

	max=(a>b)? (a>c ? a:c):(b>c? b:c);
	printf("The largest number is %f",max);

	return 0;
}
