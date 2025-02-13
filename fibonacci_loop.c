/* Write a C program to display the fibonacci series upto n elements. 
	Read the value of n from the user */

#include<stdio.h>

int main(void)
{
	int n;
	printf("Enter a whole number: ");
	scanf("%d",&n);
	
	/* Writing the fibonacci series to the console */
	int n1=0,n2=1,n3;	
	for(int i=0;i<n;i++)
	{
		printf("%d ",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	
	return 0;
}
		
