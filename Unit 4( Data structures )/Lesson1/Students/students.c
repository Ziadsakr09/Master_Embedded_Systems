/*
 * students.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Ahmed
 */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#include "students.h"

struct SStudentNode *gpFirstStudent = NULL;

void fill_the_record(struct SStudentNode *NewStudent)
{
	char temp_text[NAME_LENGTH];

	printf("Enter Student ID: ");
	fflush(stdout);
	gets(temp_text);
	NewStudent->Student.ID = atoi(temp_text);

	printf("Enter Student Name: ");
	fflush(stdout);
	gets(NewStudent->Student.Name);

	printf("Enter Student Height: ");
	fflush(stdout);
	gets(temp_text);
	NewStudent->Student.height = atof(temp_text);
}

void list_add_student(void)
{
	struct SStudentNode *pNewStudent ;
	struct SStudentNode *pLastStudent ;

	if (gpFirstStudent == NULL)// If the list is empty
	{
		// Create the first record
		pNewStudent = (struct SStudentNode*) malloc(sizeof(struct SStudentNode));

		// Check for invalid allocation
		if(pNewStudent == NULL)
		{
			printf("Error: Can't create new student\n");
			return;
		}

		// Assign the gpFirstStudent to it
		gpFirstStudent = pNewStudent;
	}
	else // If the list contain records
	{
		// Navigate until reach to the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->pNext)
		{
			pLastStudent = pLastStudent->pNext;
		}

		// Create new record
		pNewStudent = (struct SStudentNode*) malloc(sizeof(struct SStudentNode));

		// Assign its next to it
		pLastStudent->pNext = pNewStudent;
	}

	// Fill the record
	fill_the_record(pNewStudent);

	// Assign its next to null
	pNewStudent->pNext = NULL;
}


int list_delete_student(void)
{
	char temp_text[NAME_LENGTH];
	unsigned int selected_id;

	// Get the selected ID from the user
	printf("\nEnter Student ID to be deleted: ");
	fflush(stdout);
	gets(temp_text);
	selected_id = atoi(temp_text);

	if(gpFirstStudent) // List have records
	{
		struct SStudentNode *pSelectedStudent = gpFirstStudent;
		struct SStudentNode *pPreviousStudent = NULL ;

		// Loop on all records starting from the gpFirstStudent
		while(pSelectedStudent)
		{
			// Compare the recorded ID with the selected ID
			if(pSelectedStudent->Student.ID == selected_id)
			{
				if(pPreviousStudent)
				{
					pPreviousStudent->pNext = pSelectedStudent->pNext;
				}
				else
				{
					gpFirstStudent = pSelectedStudent->pNext;
				}
				free(pSelectedStudent);
				printf("\nThe ID selected is deleted. \n");
				fflush(stdout);
				return 1; // find it
			}
			// Store the previous record pointer
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->pNext;

		}
	}
	printf("\n\tThe ID selected not find. \n");
	return 0; // can't Find it
}


void list_view_students(void)
{
	struct SStudentNode *pCurrentStudent = gpFirstStudent;
	unsigned int counter = 0;

	if(gpFirstStudent == NULL)
	{
		printf("\n List is empty. \n");
	}
	while(pCurrentStudent)
	{
		printf("\n Record Number %d",counter+1);
		printf("\n\t ID : %d",pCurrentStudent->Student.ID);
		printf("\n\t Name : %s",pCurrentStudent->Student.Name);
		printf("\n\t Height : %0.2f\n",pCurrentStudent->Student.height);
		pCurrentStudent = pCurrentStudent->pNext;
		counter++;
	}
}


void list_delete_all(void)
{
	struct SStudentNode *pCurrentStudent = gpFirstStudent;

	if(gpFirstStudent == NULL)
	{
		printf("\n List is empty");
	}
	while(pCurrentStudent)
	{
		struct SStudentNode *pTempStudent = gpFirstStudent;
		pCurrentStudent = pCurrentStudent->pNext;
		free(pTempStudent);
	}
	gpFirstStudent = NULL;
}


void list_get_node(int index)
{
	// Check if the list is empty
	if(gpFirstStudent == NULL || index < 0)
	{
		printf("\nThe List is Empty.\n");
	}

	struct SStudentNode *pTemp = gpFirstStudent;
	unsigned int counter = 0;

	// Check if the first recored is null
	while(pTemp)
	{
		if(counter == index)
		{
			printf("\n Record Index %d",index);
			printf("\n\t ID : %d",pTemp->Student.ID);
			printf("\n\t Name : %s",pTemp->Student.Name);
			printf("\n\t Height : %0.2f\n",pTemp->Student.height);
		}
		pTemp = pTemp->pNext;
		counter++;
	}
}


int list_students_count_iterative(void)
{
	// Check if the list is empty
	if(gpFirstStudent == NULL )
	{
		printf("\nThe List is Empty.\n");
		return 0;
	}

	struct SStudentNode *pTemp = gpFirstStudent;
	unsigned int counter = 1;

	// Looping in list
	while(pTemp)
	{
		if(pTemp->pNext == NULL)
		{
			break;
		}
		pTemp = pTemp->pNext;
		counter++;
	}
	return counter;
}


int list_students_count_recursive(struct SStudentNode *curr)
{

		if(curr == NULL)return 0;
		else return 1+list_students_count_recursive(curr->pNext);

}

void list_get_node_from_end(int n){
	int i;
	struct SStudentNode *fast = gpFirstStudent;
	struct SStudentNode *slow = gpFirstStudent;
	for(i=0; (i<n) && fast; i++)
	{
		fast = fast->pNext;
	}
	if(fast!=slow)
	{
		while (fast)
		{
			fast = fast->pNext;
			slow = slow->pNext;
		}
	}
	if(slow){
		printf("---------------------------------------------------------------\n");
		printf("Student Name: %s\n",slow->Student.Name);
		printf("Student ID: %d\n",slow->Student.ID);
		printf("Student Height: %.2f\n",slow->Student.height);
		printf("---------------------------------------------------------------\n");
		return;
	}

}


void list_get_middle_student(void)
{
	// Check if the list is empty
	if(gpFirstStudent == NULL)
	{
		printf("\nThe List is Empty.\n");
	}

	// Get Student number
	int studentNumber = 0;

	// Get number of nodes in the list
	studentNumber = list_students_count_iterative();

	// Get the index we want
	list_get_node(studentNumber/2);
}

void list_reverse_students(void)
{
	// Initialize node for previous, current and next
	struct SStudentNode *pPreviousStudent = NULL;
	struct SStudentNode *pCurrentStudent = gpFirstStudent;
	struct SStudentNode *pNextStudent = NULL;

	// Check if the list is empty
	if(gpFirstStudent == NULL)
	{
		printf("\nThe List is Empty.\n");
		return;
	}

	// if pCurrentStudent get the last node in the list
	while(pCurrentStudent != NULL)
	{
		pNextStudent = pCurrentStudent->pNext;
		pCurrentStudent->pNext = pPreviousStudent;
		pPreviousStudent = pCurrentStudent;
		pCurrentStudent = pNextStudent;
	}

	// After reverse all node
	gpFirstStudent = pPreviousStudent;
}
