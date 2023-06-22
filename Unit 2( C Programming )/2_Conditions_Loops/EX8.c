/*
 * EX8 C Program to make a simple calculator using switch...case *
 *  Created on: Jun 22, 2023
 *      Author: Ziad
 */


#include <stdlib.h>
#include "stdio.h"
int main(void){
	float num1,num2;
	char operator;
	printf("Enter an operation (+ or * or - or /): ");
	fflush(stdout);
	scanf("%c", &operator);



	switch(operator){
	case '+':{
		printf("Enter two numbers: ");
		fflush(stdout);
		scanf("%f %f", &num1,&num2);
		printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1+num2);
	}
	break;

	case '*':{
		printf("Enter two numbers: ");
		fflush(stdout);
		scanf("%f %f", &num1,&num2);
		printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1*num2);
	}
	break;

	case '-':{
		printf("Enter two numbers: ");
		fflush(stdout);
		scanf("%f %f", &num1,&num2);
		printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1-num2);
	}
	break;

	case '/':{
		printf("Enter two numbers: ");
		fflush(stdout);
		scanf("%f %f", &num1,&num2);
		printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1/num2);
	}
	break;

	default:
		printf("You can only enter (+-*/)");
		break;
	}



	return 0;
}
