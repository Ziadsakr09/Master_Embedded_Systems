/*
 *
 * EX2_C_Program_To_Calculate_Average
 *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"

int main(){
	float avg=0;
	int n;
	printf("Enter numbers of data: ");
	fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);
		avg+=arr[i];
	}

	printf("Average= %.2f",avg/n);

}
