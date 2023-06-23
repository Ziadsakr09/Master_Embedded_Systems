/*
 *EX3_C_Program_To_Find_Transpose_Of_A_Matrix
 *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(){
	int r,c;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf("%d %d",&r,&c);
	int arr[r][c];
	int transpose[c][r];
	printf("Enter elements of matrix\n");

	for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("Enter (%d,%d): ",i+1,j+1);
				fflush(stdout);
				scanf("%d",&arr[i][j]);
				transpose[j][i]=arr[i][j];
			}
		}

	printf("Entered matrix: \n");

	for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("%d",arr[i][j]);
				printf("\t");
			}
			printf("\n");
		}

	printf("Transposed matrix: \n");

	for(int i=0;i<c;i++){
				for(int j=0;j<r;j++){
					printf("%d",transpose[i][j]);
					printf("\t");
				}
				printf("\n");
			}
}
