// The program works for strings that are less than or equal to 100 strings and things after that don't work.
#include<stdio.h>
int main(void)
{
	char name[100]={},length;
	printf("Enter the string: ");
	for(int i=0;;i++)
	{
		scanf("%c",&name[i]);
		if(name[i]=='\n'){
			length=i;
			break;
		}
	}

	// Printing the length of the string:
	printf("Your string is of length: %d\n",length);
}
