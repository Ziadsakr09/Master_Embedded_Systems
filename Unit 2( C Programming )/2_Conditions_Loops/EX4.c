/*
 * EX4 C Program to check a number is positive or negative or zero *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	float num;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &num);

	if(num>=0){
		if (num==0){
			printf("You entered zero");
		}
		else{
			printf("%f is positive",num);
		}
	}
	else{
		printf("%f is negative",num);
	}

	return 0;
}
