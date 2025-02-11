/* A C program to find the tax on a person in the current tax system 
    Below is the tax slab
    Annual Income (₹)	Tax Rate (%)
    0 – 4,00,000	        Nil
    4,00,001 – 8,00,000	    05
    8,00,001 – 12,00,000	10
    12,00,001 – 16,00,000	15
    16,00,001 – 20,00,000	20
    20,00,001 – 24,00,000	25
    Above 24,00,000	        30
    
    There is no tax upto 12.75 lack Rupees 
   ** Ignore any other complexities.
    */
#include<stdio.h>

int main(void)
{
    float income,tax;
    /* Enter your income */
    printf("Enter you income: \n");
    scanf("%f",&income);
    
    /* Calculating the income tax for the entered income */
    if(income<=1275000)
	{
        printf("You need not pay any tax");
		return 0;
	}
    else
    {
        tax = 60000;
        if(income<=1600000)
        {
            tax += 0.15*(income-1200000);
            return 0;
        }
        else
            tax += 0.15*400000;
            
        if(income<=2000000)
        {
            tax += 0.20*(income-1600000);
            return 0;
        }
        else
            tax += 0.20*400000;
        
        if(income<=2400000)
        {
            tax += 0.25*(income-2000000);
            return 0;
        }
        else
            tax += 0.25*400000;
        
        tax += 0.30*(income-2400000);
    }
	printf("Income: Rs. %.3f\nTax: Rs. %.3f\n",income,tax);
    return 0;
}
