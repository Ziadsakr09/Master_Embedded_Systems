/*
 * EX7 C Program to find factorial of a number *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	int num,fact=1;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);

	if(num<0){
		printf("Error!!! Factorial of negative number does not exist.");
	}
	else{
		for(int i=num; i>=1;i--){
			fact*=i;
		}
		printf("factorial=%d",fact);
	}

	return 0;
}
