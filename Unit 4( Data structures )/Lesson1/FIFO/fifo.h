/*
 * fifo.h
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdlib.h"
#include "stdint.h"
#define element_type uint8_t

#define width 5
element_type buff[width];

typedef struct{
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
	element_type* tail;

}FIFO_Buf_t;

typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_status;

FIFO_status FIFO_init(FIFO_Buf_t* fifo, element_type* buff, uint32_t length);
FIFO_status FIFO_enqueue(FIFO_Buf_t* fifo, element_type item);
FIFO_status FIFO_dequeue(FIFO_Buf_t* fifo, element_type* item);
FIFO_status FIFO_is_full(FIFO_Buf_t* fifo);
void FIFO_print(FIFO_Buf_t* fifo);
#endif /* FIFO_H_ */
