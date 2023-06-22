/*
 * EX5 C Program to check a character is an alphabet or not *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	char c;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);

	if((c>='a' && c<='z')||(c>='A' && c<='Z')){
		printf("%c is a character",c);
	}
	else{
		printf("%c is not a character",c);

	}

	return 0;
}
