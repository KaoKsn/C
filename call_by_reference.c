/* Read two integers a and b. Add them and then subtract them and assign the sum and difference to a and b respectively using the concept of call by reference */

#include<stdio.h>

void CallByReference(int *x,int *y)
{
	*x += *y; // The value of a is updated to a+b;
	*y = *x-2*(*y); // The value of b is now updated to a-b;	
}

int main(void)
{
	int a,b;
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	
	printf("The old values of a and b are: %d and %d\n",a,b);
	CallByReference(&a,&b);
	
	printf("The new values of a and b are: %d and %d\n",a,b);
	
	return 0;
}
	
