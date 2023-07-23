/*
 * lifo.h
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */

#ifndef LIFO_H_
#define LIFO_H_

typedef struct{
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buf_t;


typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_status;


LIFO_status LIFO_add_item(LIFO_Buf_t* lifo_buf, unsigned int item);
LIFO_status LIFO_get_item(LIFO_Buf_t* lifo_buf, unsigned int* item);
LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf, unsigned int* buf,unsigned int length);

#endif /* LIFO_H_ */
