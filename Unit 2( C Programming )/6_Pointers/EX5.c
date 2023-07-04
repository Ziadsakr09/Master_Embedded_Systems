/*
 * Write a program in C to show a pointer to an array which contents
are pointer to structure.
 *
 *  Created on: Jul 4, 2023
 *      Author: Ziad
 */
#include <stdio.h>

struct SEmployee{
	char* name;
	int id;
};

int main(){
	struct SEmployee emp1={"Ziad",9};
	struct SEmployee *arr[]={&emp1};
	struct SEmployee *(*ptr)[]=&arr;

	printf("Employee Name: %s \n",(*(*ptr))->name);
	printf("Employee ID: %d \n",(*(*ptr))->id);
}
