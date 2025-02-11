/* Write a C program to generate a random number between 1 to 100. Ask the user to guess the random number generated.
	
	Print "Guess a larger number" if the guessed number is lesser than the random number generated 
	Else print "Guess a smaller number" if the guessed number is larger than the random number generated.
	Print to the console the number of guesses taken and a congratulations message. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	/* Variable Declarations and Initialization if required */
	int random_number, number_guessed , no_of_guesses=0;
;
	/* Generating a random number from 1 to 100 */
	srand(time(0));
	
	random_number = (rand() % 100) + 1;
	
	printf("\nWelcome to Guess the Number from 1 to 100\n\n");
	do
	{
		/* Asking for the guess */
		printf("Guess: ");
		scanf("%d",&number_guessed);

		/* Hinting the user */
		if(random_number>number_guessed)
			printf("Guess a larger number\n");
		else if(random_number<number_guessed)
			printf("Guess a smaller number\n");
		else
			printf("\nCongratulations!\n");
		
		/* Incrementing the no_of_guesses variable */
		no_of_guesses++;

	} while(number_guessed != random_number);

	/* Printing the number of guesses to finally match the random number generated */
	printf("You guessed the number right in \"%d\" attempts\n",no_of_guesses);

	return 0;
}
