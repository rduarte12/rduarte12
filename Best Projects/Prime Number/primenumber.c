/*
*  Project desenvolved by git @rduart12
*  ---------------------------------------
*  Year: 2025
*  Why: Learning about coding
*
*/

#include <stdlib.h>
#include <stdio.h>

// Global variables
int num;
int divisor;

/*
* Function: Verify if a number is prime, or not.
* The user must will input a natural number to verify,
* else the program won't work!
*/

int main(void)
{

    //Force the user input a natural number
    do
    {
        printf("For verify if a number is prime, enter a number belonging to the set of natural numbers:");
        scanf("%d", &num);
        printf("\n\n");

        if(num < 0)
        {
            printf("%d is an Invalid number\n\n", num);
        }

    } while(num < 0);

    //define the valor of 'divisor'
    divisor = num - 1;


    /*
    * According to the mathematical definitions for prime number,
    * determine whether it is prime or not,
    * based on the remainders of successive divisions.
    */

    do
    {
        int verify = num % divisor;

        if(verify != 0)
        {
            divisor--;

        }
        else
        {
            printf("The number %d is not prime\n", num);
            divisor = 0;
        }

    }while(divisor > 1);

    if(divisor == 1)
        {
            printf("The number %d is prime\n", num);
        }
}
