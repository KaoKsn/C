/* A C program to find the factorial of any whole number using the concept of recursion */

/* Factorial of any whole number n is represented as n! and is mathematically,
		n! = n * (n-1) * (n-2) * .... * 1;
		
		Recursive condition:
		n! = n * (n-1)!
*/

#include<stdio.h>

long factorial(int x)
{
	if(x==0) /* Base Condition */
		return 1;
	else
		return x*factorial(x-1);
}
int main(void)
{
	int n;
	do
	{
		printf("Enter a **whole number**: ");
		scanf("%d",&n);
	}while(n<0);
	
	/* Calling the recursive function */
	printf("The factorial of %d is: %ld\n",n,factorial(n));
}
