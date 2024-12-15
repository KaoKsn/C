// The above usage of the function strlen() gives you the exact value of the length of the string.
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[] = "HelloWorld";
	printf("The length of string name is: %d\n",strlen(name));
}
