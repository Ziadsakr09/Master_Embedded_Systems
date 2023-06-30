/*
 * EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function
 *
 *  Created on: Jun 30, 2023
 *      Author: Ahmed
 */



#include<stdio.h>

struct SComplex{
	float c_real;
	float c_img;
};

struct SComplex Readinfo(){
	struct SComplex Complex;
	printf("\nEnter real and imaginary respectively:");

	fflush(stdout);
	scanf("%f %f",&Complex.c_real,&Complex.c_img);
	return Complex;
}

struct SComplex Add(struct SComplex First,struct SComplex Second){
	struct SComplex Result;
	Result.c_img=First.c_img+Second.c_img;
	Result.c_real=First.c_real+Second.c_real;


	return Result;
}

void print(struct SComplex Result){
	printf("\nThe sum = %.1f+%.1fi",Result.c_real,Result.c_img);
}


int main(){
	struct SComplex First,Second,Result;
	printf("Enter info of 1st number:\n");
	First=Readinfo();
	printf("\nEnter info of 2nd number:\n");
	Second=Readinfo();
	Result=Add(First,Second);
	print(Result);
}

