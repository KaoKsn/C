/* Write a C program to find the factorial of a whole number using loops */

#include<stdio.h>

int main(void)
{
	/* Reading the number */
	int n,factorial=1;
	printf("Enter a whole number: ");
	scanf("%d",&n);
	
	for(int i=2;i<=n;i++)
		factorial*=i;
	
	/* Printing the value of factorial to the console */
	printf("The factorial of %d is: %d\n",n,factorial);
	
	return 0;
}
