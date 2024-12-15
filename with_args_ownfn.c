#include<stdio.h>

//The prototype of the user defined functions.
int meow(int x);

int main(void){
	int n,returnvalue;
	short int beta;

	printf("Enter the number of times you want your cat to meow: ");
	scanf("%d",&n);
	meow(n);
	returnvalue=meow(beta);
	
	/* If an integer is given as an argument while assignment of variable returnvalue, it executes the code for the value of the integer we give */
	
	/* But if we use a short int variable it doesn't */
	printf("%d is the value that was returned by the user defined function meow()\n",returnvalue);        
      	// Alternatively meow(beta) can also be used for the same kinda output you are currently getting.

	
	/* 
		Line of Code:
	   printf("%d is the value that was returned by the user defined function meow()\n",meow(n));

	 Point 1: Without these lines the output of the program would look like this for a n value of 3.
Enter the number of times you want your cat to meow: 3
1. Meow
2. Meow
3. Meow
1. Meow
2. Meow
3. Meow
4. Meow
3 is the value that was returned by the user defined function meow()
	
	Point 2: With the line of code, the output would look like this for n=3:
Enter the number of times you want your cat to meow: 3
1. Meow
2. Meow
3. Meow
1. Meow
2. Meow
3. Meow
4. Meow
3 is the value that was returned by the user defined function meow()
1. Meow
2. Meow
3. Meow
3 is the value that was returned by the user defined function meow()


 	 */
	return 0;
}

int meow(int x){
	for(int i=1;i<=x;i++)
		printf("%d. Meow\n",i);
	return 3;
}
