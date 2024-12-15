#include<stdio.h>
int main(int argc, char argv[3])
{
	if(argc != 2)
	{
		printf("Missing command-line argument\n");
		return 1;
	}
	printf("Hello, World!\n");
	return 0;
}
