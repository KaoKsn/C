#include<stdio.h>
int main(void)
{
	char name[4]="abcd";
	printf("%c\t %i\n",name[3],name[4]); // This would return a random garbage value for name[4].

	/* If char name[5]="abcd";
	 	Then the value of name[4] would be 0 as the NUL character is present in name[4].
		*/
}
