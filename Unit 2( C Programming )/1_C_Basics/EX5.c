/*
 * Write C Program to Find ASCII Value of a Character
 *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	char x;

	printf("Enter character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c: %d",x,x);
	return 0;
}
