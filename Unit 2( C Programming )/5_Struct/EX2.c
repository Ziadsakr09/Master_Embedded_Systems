/*
 * C_Program_to_Add_Two_Distances_Systems_Using_Structure
 *
 *  Created on: Jun 30, 2023
 *      Author: Ahmed
 */

#include<stdio.h>

struct SDistance{
	float d_inches;
	int d_feet;
};

struct SDistance Readinfo(){
	struct SDistance Distance;
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&Distance.d_feet);

	printf("Enter inches: ");
	fflush(stdout);
	scanf("%f",&Distance.d_inches);
	return Distance;
}

struct SDistance Add(struct SDistance First,struct SDistance Second){
	struct SDistance Result;
	Result.d_feet=First.d_feet+Second.d_feet;
	Result.d_inches=First.d_inches+Second.d_inches;

	while(Result.d_inches>=12.0){
		Result.d_inches-=12.0;
		++Result.d_feet;
	}
	return Result;
}

void print(struct SDistance Result){
	printf("\nThe sum of distances= %d\'-%.1f\"",Result.d_feet,Result.d_inches);
}


int main(){
	struct SDistance First,Second,Result;
	printf("Enter info of 1st distance:\n");
	First=Readinfo();
	printf("\nEnter info of 2nd distance:\n");
	Second=Readinfo();
	Result=Add(First,Second);
	print(Result);
}

