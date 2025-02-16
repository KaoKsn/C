/* Write a C program to reverse any given input array */

#include<stdio.h>

void arrayReverser(int *ptr,int n)
{
	int temp;
	for(int i=0;i<n/2;i++)          /* Going for i<=n/2 is not required and computes extra unwanted interations */
	{
		int temp = ptr[i];
		ptr[i] = ptr[n-i-1]; // ptr[n] doesn't exist
		ptr[n-i-1] = temp;
	}
}

int main(void)
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);

	printf("\nEnter your array here:\n");
	int array[size];
	
	for(int i=0;i<size;i++)
		scanf("%d",&array[i]);

	/* Printing the array before reversal takes place */
	printf("\nArray before reversing.....\n");
	for(int i=0;i<size;i++)
		printf("%d\t",array[i]);

	/* Calling the arrayReverser(char *) function */
	arrayReverser(array,size);
	
	/* Printing the reversed array */
	printf("\nThe reversed array.......\n");
	for(int i=0;i<size;i++)
		printf("%d\t",array[i]);

	return 0;
}
