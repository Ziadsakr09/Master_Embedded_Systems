/*
 * EX3.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Ahmed
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	char x;

	printf("Enter character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c: %d",x,x);
	return 0;
}
