/* Write a simple C program to take a string input that contains the html syntax and then print the parsed string. An example is given below

char string [] = "<h1> This is the string to be parsed </h1>";
	parsed string: This is the string to be parsed

	*** Any whitespace and any number of them in the beginning and the end has to be removed ***

	The following output must be after the string has been provided as an argument to a function named htmlParser();
*/


/* The proposed algorithm to parse a simple html statement that contain single tags:

	
	The aim is to modify the input string into the parsed string.
	Algorithm:
			1. Travers through the complete input string.
			2. Encountering the opening tag(<) should let you know that you should not include the items from it to format the string input.
			3. You have to start modifying the string input after you complete passing through the closing html tag(>).
			4. To perform steps 2 and 3 you will require a varible to let you know when to stop and when to start adding characters to the parsed string.
			5. After the first for loop you will be having the string with leading and trailing whitespaces. We need to remove them.
			6. To remove the leading spaces, 
				Check if the first element is a whitespace character
						if yes, then move the whitespace character out of the string by moving the elements to the left 
						else you are fine and you have no leading whitespaces.
			7. To remove the trailing whitespaces, 
				Check if the last element of the string(the element just before the '\0') is a whitespace
						if yes, then replace it will the NULL character essentially decreasing the length of the string.
						else you are fine and you have no trailing whitespaces.
*/
#include<stdio.h>
#include<string.h>

void htmlParser(char *string)
{
	int in=0; 		/* To control the characters entering the parsed string */

	int index = 0; // To change the input string into the parsed string

	/* Code to exract the content of the string */
	for(int i=0;i<strlen(string);i++)
	{
		if(string[i] == '<')
		{
			in = 1;
			continue; 		/* Saving computation */
		}
		else if(string[i] == '>')
		{
			in = 0;
			continue; 		/* So that character '>' is not included in the parsed string */
		}
		
		if(in == 0)
		{
			string[index] = string[i];				
			index++;
		}
	}
	
	/* To finally change the variable string from just being a character array to an actual string literal we need to add the '\0' character. */
	string[index] = '\0';

	/* Getting the completely parsed string with only non-whitespace character literals */

	/* Removing the leading whitespaces */
	while(string[0] == ' ')
	{
		for(int j=0;j<strlen(string);j++)
			string[j]=string[j+1]; 		/* Shift the next character of the string into the previous character */
	}
	
	/* Removing the trailing whitespaces */
	while(string[strlen(string)-1] == ' ')
	{
		string[strlen(string)-1] = '\0';
			
		/* string[strlen(string)] would be the NULL character, we need to check if the last character of the string(excluding the \0) is a whitespace.
		If it turns out to be a whitespace replace it with a NULL character effectively bringing down the length of the string */
	}
}

int main(void)
{
	char string [] = "  <span> Parse out this html line </span>      ";
	printf("The string before parsing: \" %s\" \n",string);

	/* Calling the parser function */
	htmlParser(string);
	
	printf("The string after parsing is: \"%s\" \n",string);
	return 0;
}
