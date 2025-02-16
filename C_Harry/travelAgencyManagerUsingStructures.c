/* Write a C program to that has these details of the drivers in your travel agency and prints it to the console one by one. 
	
	1. License ID as a string.
	2. Name as a string.
	3. Number of years they have worked for your agency as a floating point value.
	4. The city they operate in, as a string.
	5. Their phone number as a long int.
	6. Their age as an integer.

*** Make sure that your program is able to take the input of n drivers. n is the value taken from the agency manager ***
 
*/

#include<stdio.h>
#include<string.h>

/* Declaring and defining a structure */
struct agencyDriverInfo
{
	int age;
	long phone;
	char name[30];
	char city_of_operation[20];
	float years;
	char licenseID[30];
};

void getdata(struct agencyDriverInfo *driver,int n)
{
	printf("\nEnter the following details: \n");
	for(int i=0;i<n;i++)
	{
		printf("\nDriver %d\n",i+1);
	
		printf("Name: ");
		fgets(driver[i].name,30,stdin);
		printf("Age: ");
		scanf("%d",&driver[i].age);
		
		getchar();

		printf("License ID: ");
		fgets(driver[i].licenseID,30,stdin);
		printf("Phone: ");
		scanf("%ld",&driver[i].phone);
		printf("Working with us for (yrs): ");
		scanf("%f",&driver[i].years);

		getchar();

		printf("City of operation: ");
		fgets(driver[i].city_of_operation,20,stdin);
	}
}
void putdata(struct agencyDriverInfo *driver,int n)
{
	printf("\nBelow are the details of your drivers\n");
	for(int i=0;i<n;i++)
	{
		printf("\nDriver: %d\n",i+1);
		printf("Name: %s",driver[i].name);  /* a \n is not needed as fgets() considers the \n as an input for the strings entered */
		printf("Age: %d\n",driver[i].age);
		printf("License ID: %s",driver[i].licenseID);
		printf("Phone: %ld\n",driver[i].phone);
		printf("Working with us for %.2f yr(s).\n",driver[i].years);
		printf("City of Operation: %s",driver[i].city_of_operation);
	}
}

int main(void)
{
	int n;
	printf("Enter the number of drivers: ");
	scanf("%d",&n);
	getchar(); /* To consume the \n so that it doesn't affect the working of fgets() */

	/* Creating structure variables according to the given input */
	struct agencyDriverInfo driver[n];

	/* Getting the user input of differnt drivers */	
	getdata(driver,n);

	/* Writing the user input given of different drivers */
	putdata(driver,n);

   	return 0;
} 
