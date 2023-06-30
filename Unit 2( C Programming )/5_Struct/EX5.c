/* EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 */
#include<stdio.h>
#define PI 3.14159

double area(float r){
	return (PI*r*r);
}

int main(){
	float r;
	printf("Enter raidus: ");
	fflush(stdout);
	scanf("%f",&r);
	printf("area= %.2lf",area(r));
}
