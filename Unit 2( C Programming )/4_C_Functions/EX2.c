/*
 * Factorial using recursion
 *
 *  Created on: Jun 25, 2023
 *      Author: Ziad
 */
#include <stdio.h>

int factorial(int num){
	if(num<=1){
		return 1;
	}
	return factorial(num-1)*num;
}

int main() {
    int num;
    printf("Enter positive integer: ");
    fflush(stdout);
    scanf("%d", &num);
    printf("factorial of %d: ",factorial(num));

    return 0;
}
