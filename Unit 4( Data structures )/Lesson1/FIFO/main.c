/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */
#include "fifo.h"
#include "stdlib.h"
int main(){
	element_type i,temp=0;
	FIFO_Buf_t uart;
	if(FIFO_init(&uart,buff,5)==FIFO_no_error){
		printf("fifo init is done\n");
	}

	for(i=0;i<5;i++){
		printf("FIFO enqueue (%x)\n",i);
		if(FIFO_enqueue(&uart,i)==FIFO_no_error){
			printf("fifo enqueue is done\n");
		}
		else{
			printf("fifo enqueue is failed\n");
		}
	}

	FIFO_print(&uart);
	if(FIFO_dequeue(&uart,&temp)==FIFO_no_error){
		printf("fifo dequeue %x is done\n",temp);
	}
	if(FIFO_dequeue(&uart,&temp)==FIFO_no_error){
		printf("fifo dequeue %x is done\n",temp);
	}
	FIFO_print(&uart);
}
