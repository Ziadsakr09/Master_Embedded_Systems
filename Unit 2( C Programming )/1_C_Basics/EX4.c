/*
 * Write C Program to Multiply two Floating Point Numbers

 *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
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
