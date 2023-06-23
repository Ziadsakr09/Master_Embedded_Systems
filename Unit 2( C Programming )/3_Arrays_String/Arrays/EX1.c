/*
 *
 * EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"

int main(){
	float arr1[2][2];
	float arr2[2][2];

	printf("Enter elements of first matrix\n");

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter (%d,%d): ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}

	printf("Enter elements of second matrix\n");

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter (%d,%d): ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}

	printf("Sum of matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%.1f",arr1[i][j]+arr2[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
