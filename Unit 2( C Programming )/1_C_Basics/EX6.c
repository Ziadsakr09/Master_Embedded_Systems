/*
 * Write Source Code to Swap Two Numbers
 *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	float a,b,temp;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);

	temp=a;
	a=b;
	b=temp;

	printf("After swapping, value of a: %f\n",a);
	printf("After swapping, value of b: %f",b);


	return 0;
}
