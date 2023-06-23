/*
 * EX1_C_Program_To_Find_The_Frequency_Of_Characters
 *
 *  Created on: Jun 23, 2023
 *      Author: Ziad
 */

#include <stdio.h>

int main(){
	char text[100],key;
	int count=0;
	printf("Enter text: ");
	fflush(stdout);
	gets(text);
	printf("Enter character to find frequency: ");
	fflush(stdout);
	scanf("%c",&key);

	for(int i=0 ; i<strlen(text);i++){
		if(key==text[i]){
			count++;
		}
	}
	printf("frequency of %c: %d",key,count);
}
