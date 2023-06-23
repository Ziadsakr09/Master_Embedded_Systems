/*
 *EX4_C_Program_To_Insert_An_Element_in_a_Array
 *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(){
	int n,inserted,location;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n+1];

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		printf("%d ",arr[i]);
	}

	printf("\nEnter element to insert: ");
	fflush(stdout);
	scanf("%d",&inserted);

	printf("Enter location: ");
	fflush(stdout);
	scanf("%d",&location);

	for(int i=n+1;i>=location;i--){
			arr[i]=arr[i-1];
		}
	arr[location-1]=inserted;
	for(int i=0;i<n+1;i++){
				printf("%d ",arr[i]);
			}
}
