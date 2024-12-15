#include<stdio.h>

int meow(void);

int main(void){
	// Writing meow() here will cause redenduncy.
	printf("%d is the return value of the function meow()\n",meow());

	/* NOTES::
	1.If d is used as the return value for the function meow() the %d will be given to the ASCII value of d i.e 100.
	
	2. If c is used as the return value the you get the return value of the function to be a random integer in the output. */

	return 0;
}

int meow(void){
	int i,c;
	printf("How many times do you want your cat to meow? ");
	scanf("%d",&i);
	for(int j=0;j<i;j++)
		printf("%d. Meow\n",j+1);
     //	return 'd';
        return c;

	// If c is not declared an integer then it will not accept it as a return value unless it is put under the single or the double quote.
}
