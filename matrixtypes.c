#include<stdio.h>
int main(void){
	int i,j,height;
	printf("Enter the height of the matrix: \n");
	scanf("%d",&height);
	printf("\nGenerating your matrix.....\n");

	//Prining the matrix.
	for(i=1;i<=height;i++){
		for(j=1;j<=height;j++){
			if(j>=height+1-i){
				printf("#");
			}
		else
				printf(" ");
		}
		printf("\n");
	}
}
