/* Write a C program to write the fibonacci series till n elements using the concept of recursion */

/* An Example of a fibonacci series for n = 5 is given below:
	0 1 1 2 3  

   See through that you read only non-negative integer values for n.
*/

/* Implementation:
	We are considering that fibonacci(x) is the 'x'th element of the fibonacci series i.e if the user inputs n the we shall from fibonacci(1) to fibonacci(n).

	By definition:
		fibonacci(1) = 0 and fibonacci(2) = 1
		fibonacci(x) = fibonacci(x-1)+fibonacci(x-2);

	Effectively every element of the fibonacci series is linear combination of fibonacci(1) and fibonacci(2) or a multiple of fibonacci(2){Because fibonacci(1)=0}.
	For Example,
			 	1. fibonacci(3) = fibonacci(1)+fibonacci(2);
				2. fibonacci(5) = fibonacci(3)+fibonacci(4);
								  fibonacci(1)+fibonacci(2)+fibonacci(2)+fibonacci(3);
								  fibonacci(1)+fibonacci(2)+fibonacci(2)+fibonacci(2)+fibonacci(1);
								= 2*fibonacci(1)+3*fibonacci(2);
*/

#include<stdio.h>
#include<stdlib.h>

int fibonacci(int x)
{
	/* Defining the terminating or the base condition(s) */
	if(x==1)
		return 0;
	else if(x==2)
		return 1;
	
	/* Defining the recursive condition */
	else
		return fibonacci(x-1)+fibonacci(x-2);

}

int main(void)
{
	/* Read the input variable */
	int n;
	do
	{
		printf("Enter a non-negative integer: ");
		scanf("%d",&n);
	}while(n<0);

	if(n==0)
		exit(0);
	else
	{
		/* Calling the fibonacci series writing function */
		for(int i=1;i<=n;i++)
			printf("%d ",fibonacci(i));
	}	
	return 0;
}
