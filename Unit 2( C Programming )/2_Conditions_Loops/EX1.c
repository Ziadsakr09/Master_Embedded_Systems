/*
 * EX1 C Program to check a number is even *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	int num;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	if((num%2)==0){
		printf("%d is even",num);
	}

	else{
		printf("%d is odd",num);
	}



	return 0;
}
