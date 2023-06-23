/*
 *EX5_C_Program_To_Search_an_Element_In_Array
 *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(){
	int n,key;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		printf("%d ",arr[i]);
	}

	printf("\nEnter element to be searched: ");
	fflush(stdout);
	scanf("%d",&key);


	for(int i=0;i<n;i++){
		if(key==arr[i]){
			printf("Number found at location: %d",i+1);
			break;
		}
		if(i==n-1){
			printf("not found");
		}
	}

}
