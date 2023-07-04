/*
 * Write a program in C to print all the alphabets using a pointer.
 *
 *  Created on: Jul 3, 2023
 *      Author: Ziad
 */
#include <stdio.h>
int main(){
	char alph[26];
	char* ptr=alph;

	for( int i=0;i<26;i++){
		*ptr=i+'A';
		*ptr++;
	}
	ptr=alph;
	for( int i=0;i<26;i++){
			printf("%c ",*ptr);
			*ptr++;
		}


}
