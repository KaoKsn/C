/* Write a C program to print the reversed triangular star pattern for any given natural number */

#include<stdio.h>

int main(void)
{
	int n;
	printf("Enter a natural number: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
