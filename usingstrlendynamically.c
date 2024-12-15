#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[20];
	
	printf("Enter your name:  \n");
	for(int i=0;;i++)
	{
		scanf("%c",&name[i]);
		if(name[i]=='\n')
			break;
	}
	int length=strlen(name);
	printf("The name you entered contains %d characters(including the whitespaces.\n",length);
}
