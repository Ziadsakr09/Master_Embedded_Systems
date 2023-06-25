/*
 * Reverse string using recursion
 *
 *  Created on: Jun 25, 2023
 *      Author: Ziad
 */
#include <stdio.h>

void reversestring(){
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		reversestring();
		printf("%c",c);
	}
}

int main() {

    printf("Enter a sentence: ");
    fflush(stdout);
    reversestring();

    return 0;
}
