/*
 * EX2 C Program to check vowel or consonant letter *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	char c;
	int lowercase_vowel, uppercase_vowel;

	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);

	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (lowercase_vowel || uppercase_vowel)
		printf("%c is a vowel.", c);
	else
		printf("%c is a consonant.", c);


	return 0;
}
