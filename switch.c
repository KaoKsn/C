#include<stdio.h>
int main(void){
	int i;
	printf("Enter a number between 1 to 3.\n");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("1 is the number entered.\n");
			break;
		case 2:
			printf("2 is the number entered.\n");
			break;
		case 3: 
			printf("3 is the number entered.\n");
			break;
		default:
			printf("None of the three entered.\n");
		}
}
