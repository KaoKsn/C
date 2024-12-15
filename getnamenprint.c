#include<stdio.h>
int main(void)
{
	char name[30],i,q;
	printf("Enter your name: ");

	for(i=0;i<30;i++)
	{
		scanf("%c",&name[i]);
		if(name[i]=='\n')
		{
			q=i;
			break;
		}
	}
	
	printf("Hello, ");
	for(i=0;i<q;i++)
		printf("%c",name[i]);
	printf("\n");
}
