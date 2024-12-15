#include<stdio.h>
int main(void){
	int a=4;

	// if else ladder work as a complete system. Even if one of the condition is met the other else if and else parts are not executed.
	if(a%4==0)
		printf("4\n");
	else if(a%2==0)
		printf("2\n");
	else if(a%1==0)
		printf("1\n");
	else
		printf("Invalid\n");
	
	printf("\n");
	// Where as in case of using simple if, all the statements will be executed if they just satisfy the given boolean expression.
	if(a%4==0)
		printf("4\n");
	if(a%2==0)
		printf("2\n");
	if(a%1==0)
		printf("1\n");
	if(1)
		printf("Invalid\n");
}
