/*
 *C_Program_to_Store_Information_of_a_Student_Using_Structure
 *
 *  Created on: Jun 30, 2023
 *      Author: Ahmed
 */

#include<stdio.h>

struct SStudent{
	char s_name[50];
	int s_roll;
	float s_marks;
};

struct SStudent Readinfo(){
	struct SStudent Studentinfo;
	printf("Enter information of student:\n\n");
	printf("Enter name of student:");
	fflush(stdout);
	scanf("%s",&Studentinfo.s_name);

	printf("Enter roll number of student:");
	fflush(stdout);
	scanf("%d",&Studentinfo.s_roll);

	printf("Enter marks of student:");
	fflush(stdout);
	scanf("%f",&Studentinfo.s_marks);
	return Studentinfo;
}

void print_info(struct SStudent Studentinfo){
	printf("\nDisplaying information of student\n");
	printf("Name of student: %s\n",Studentinfo.s_name);
	printf("Roll number of student: %d\n",Studentinfo.s_roll);
	printf("Marks of student: %.2f\n",Studentinfo.s_marks);


}

int main(){
	struct SStudent Studentinfo;
	Studentinfo=Readinfo();
	print_info(Studentinfo);
}
