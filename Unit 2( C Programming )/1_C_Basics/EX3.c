/*
 * Write C Program to Add Two Integers

 *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	int x,y;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum: %d",x+y);
	return 0;
}
