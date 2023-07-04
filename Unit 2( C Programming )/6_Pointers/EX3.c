/*
 * Write a program in C to print a string in reverse using a pointer
 *
 *  Created on: Jul 3, 2023
 *      Author: Ziad
 */


#include <stdio.h>
#include <string.h>

void reverse_string(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    reverse_string(str);
    printf("Reversed string: %s", str);
    return 0;
}

void reverse_string(char *str) {
    char *start, *end, temp;
    start = str;
    end = str + strlen(str) - 1;
    while (end > start) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
