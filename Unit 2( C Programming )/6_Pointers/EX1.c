/*
 * Write a program in C to demonstrate how to handle the pointers
in the program.
 *
 *  Created on: Jul 3, 2023
 *      Author: Ziad
 */

#include <stdio.h>
int main(){
	int m =29;
	int* ab = &m;
	printf("Address of m : %x",&m);
	printf("\nvalue of m : %d",m);

	printf("\n\nAddress of pointer ab : %x",ab);
	printf("\ncontent of pointer ab : %d",*ab);

	m=34;
	printf("\n\nAddress of pointer ab : %x",ab);
	printf("\ncontent of pointer ab : %d",*ab);

	*ab=7;
	printf("\n\nAddress of m : %x",&m);
	printf("\nvalue of m : %d",m);
}
