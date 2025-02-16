/* Read a natural number from the user and print a triangular star pattern according to the number entered.

	An example star pattern for n=3 is given below:
													*
													**
													***
*/

#include<stdio.h>

int main(void)
{
	int n;
	printf("Enter a natural number: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
