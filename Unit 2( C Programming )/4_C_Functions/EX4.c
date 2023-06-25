/*
 * Power of number using recursion
 *
 *  Created on: Jun 25, 2023
 *      Author: Ziad
 */
#include <stdio.h>

int power(int num,int p){
	if(p==0){
		return 1;
	}
	return power(num,p-1)*num;
}

int main() {
	int num,pow;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter positive power number: ");
	fflush(stdout);
	scanf("%d",&pow);
	printf("%d^%d=%d",num,pow,power(num,pow));
	return 0;
}
