/*
EX3_C_Program_to_Reverse_String_Without_Using_Library_Function *
  Created on: Jun 23, 2023
 *      Author: Ziad
 */

#include <stdio.h>

int main(){
	char text[100];

	printf("Enter text: ");
	fflush(stdout);
	gets(text);
	int n=strlen(text);
	char reversed[n];
	int i=0;

	for( i=0 ; i<n;i++){

			reversed[i]=text[n-1-i];
	}
	reversed[i]=0;
	printf("Reverse of string: %s",reversed);
}
