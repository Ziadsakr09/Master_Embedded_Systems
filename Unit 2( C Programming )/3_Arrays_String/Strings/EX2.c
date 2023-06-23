/*
EX2_C_Program_To_Find_The_Length_of_a_String *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */

#include <stdio.h>

int main(){
	char text[100];
	int count=0;

	printf("Enter text: ");
	fflush(stdout);
	gets(text);




	for(int i=0 ; text[i]!=0;i++){

		count++;

	}
	printf("Length of string: %d",count);
}
