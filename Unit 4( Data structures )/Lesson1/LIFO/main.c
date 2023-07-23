/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */

#include "lifo.h"
#include <stdlib.h>

unsigned int buffer1[5];

int main(){
	int i,temp=0;
	LIFO_Buf_t uart_lifo,i2c_lifo;
	LIFO_init(&uart_lifo,buffer1,5);

	unsigned int buffer2 = (unsigned int*) malloc (5*sizeof(unsigned int));
	LIFO_init(&i2c_lifo,buffer2,5);

	for(i=0;i<5;i++){
		if(LIFO_add_item(&uart_lifo,i)==LIFO_no_error){
			printf("UART_LIFO add: %d\n",i);
		}
	}

	for(i=0;i<5;i++){
			if(LIFO_get_item(&uart_lifo,&temp)==LIFO_no_error){
				printf("UART_LIFO get: %d\n",temp);
			}
		}
}
