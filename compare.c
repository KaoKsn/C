#include<stdio.h>
int main(void){
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("%d is the larger number.\n",a);
	else if(b>a)
		printf("%d is the larger number.\n",b);
	else
		printf("Both the numbers you entered are equal.\n");
	return 0;
}
