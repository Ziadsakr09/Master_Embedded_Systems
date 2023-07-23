/*
 * lifo.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */

#include "lifo.h"
#include <stdlib.h>

LIFO_status LIFO_add_item(LIFO_Buf_t* lifo_buf, unsigned int item){
	//check valid
	if(!lifo_buf->base || !lifo_buf->head){
		return LIFO_null;
	}

	//check full
	if(lifo_buf->count==lifo_buf->length){
		return LIFO_full;
	}

	*(lifo_buf->head)=item;
	lifo_buf->head++;
	lifo_buf->count++;

	return LIFO_no_error;
}
LIFO_status LIFO_get_item(LIFO_Buf_t* lifo_buf, unsigned int* item){
	//check valid
		if(!lifo_buf->base || !lifo_buf->head){
			return LIFO_null;
		}

	//check empty
	if(lifo_buf->count==0){
		return LIFO_empty;
	}

	lifo_buf->head--;
	*item=*(lifo_buf->head);
	lifo_buf->count--;
	return LIFO_no_error;

}
LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf, unsigned int* buf,unsigned int length){
	if(buf==NULL){
		return LIFO_null;
	}

	lifo_buf->base=buf;
	lifo_buf->head=buf;
	lifo_buf->count=0;
	lifo_buf->length=length;
	return LIFO_no_error;




}
