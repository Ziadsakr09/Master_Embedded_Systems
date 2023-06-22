/*
 * EX6 C Program to calculate sum of natural numbers *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	int num,sum=0;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);

	for(int i=0; i<=num;i++){
		sum+=i;
	}
	printf("Sum=%d",sum);
	return 0;
}
