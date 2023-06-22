/*
 * Write C Program to Print a Integer Entered by a User

 *
 *  Created on: Jun 22, 2023
 *      Author: Ahmed
 */

#include <stdlib.h>
#include "stdio.h"
int main(void){
	int num;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("You entered: %d",num);
	return 0;
}
