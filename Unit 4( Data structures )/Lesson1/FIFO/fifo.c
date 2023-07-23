/*
 * fifo.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */

#include "fifo.h"
#include "stdlib.h"
FIFO_status FIFO_init(FIFO_Buf_t* fifo, element_type* buff, uint32_t length){
	if(buff==NULL){
		return FIFO_Null;
	}

	fifo->base=buff;
	fifo->head=buff;
	fifo->tail=buff;
	fifo->count=0;
	fifo->length=length;

}
FIFO_status FIFO_enqueue(FIFO_Buf_t* fifo, element_type item){
	if(!fifo->base || !fifo->head || !fifo->tail){
		return FIFO_Null;
	}
	if(FIFO_is_full(fifo)==FIFO_full){
		return FIFO_full;
	}

	*(fifo->head)=item;
	fifo->count++;
	if(fifo->head==(fifo->base + (fifo->length*sizeof(element_type)))){
		fifo->head = fifo->base;
	}
	else{
		fifo->head++;
	}
	return FIFO_no_error;
}
FIFO_status FIFO_dequeue(FIFO_Buf_t* fifo, element_type* item){
	if(!fifo->base || !fifo->head || !fifo->tail){
		return FIFO_Null;
	}
	if(fifo->count==0){
		return FIFO_empty;
	}

	*item=*(fifo->tail);
	fifo->count--;
	if(fifo->tail==(fifo->base + (fifo->length*sizeof(element_type)))){
		fifo->tail = fifo->base;
	}
	else{
		fifo->tail++;
	}
	return FIFO_no_error;
}
FIFO_status FIFO_is_full(FIFO_Buf_t* fifo){
	if(!fifo->base || !fifo->head || !fifo->tail){
		return FIFO_Null;
	}
	if(fifo->count==fifo->length){
		return FIFO_full;
	}
	return FIFO_no_error;
}

void FIFO_print(FIFO_Buf_t* fifo){
	element_type* temp;
	int i;
	if(fifo->count==0){
			printf(" FIFO_empty");
		}
	else{
		temp=fifo->tail;
		for(i=0;i<fifo->count;i++){
			printf("\t %X \n",*temp);
			temp++;
		}

	}

}
