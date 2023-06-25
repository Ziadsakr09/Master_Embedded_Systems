/*
 * Prime numbers between two intervals
 *
 *  Created on: Jun 25, 2023
 *      Author: Ziad
 */
#include <stdio.h>
int is_prime(int num);
void print_primes(int start, int end);
int main() {
    int start, end;
    printf("Enter the start of the interval: ");
    fflush(stdout);
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    fflush(stdout);
    scanf("%d", &end);
    print_primes(start, end);
    return 0;
}
int is_prime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void print_primes(int start, int end) {
    int i;
    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
