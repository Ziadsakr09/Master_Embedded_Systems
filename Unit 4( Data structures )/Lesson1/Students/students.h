/*
 * students.h
 *
 *  Created on: Jul 23, 2023
 *      Author: Ahmed
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#define NAME_LENGTH 30

struct SStudentData
{
	int ID;
	char Name[NAME_LENGTH]; // +1
	float height;
};

struct SStudentNode
{
	struct SStudentData Student;
	struct SStudentNode *pNext;
};

void fill_the_record(struct SStudentNode *NewStudent);

void list_add_student(void);

int list_delete_student(void);

void list_view_students(void);

void list_delete_all(void);

void list_get_node(int index);

void list_get_middle_student(void);

int list_students_count_iterative(void);

void list_reverse_students(void);

int list_students_count_recursive(struct SStudentNode *list);

void list_get_node_from_end(int index);
#endif /* STUDENTS_H_ */
