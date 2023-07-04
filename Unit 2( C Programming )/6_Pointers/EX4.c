/*
Write a program in C to print the elements of an array in reverse
order. *
 *  Created on: Jul 4, 2023
 *      Author: Ziad
 */
#include <stdio.h>

int main(){
	int arr[15],n;
	int *ptr=arr;

	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout);
	scanf("%d",&n);
	printf("Input 5 number of elements in the array :\n");

	for(int i = 0;i<n;i++){
		printf("element - %d: ",i+1);
		fflush(stdout);
		scanf("%d",ptr++);
	}
	printf("The elements of array in reverse order are :");
	for(int i=n-1;i>=0;i--){
		printf("\nelement - %d: %d",i+1,*--ptr);

	}
}
