#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int calculadora();
int answer();
float getnumber();

// Global variables for the numbers and result
float firstnumber;
float secondnumber;
float result;

int main(void)
{
    // Starts the calculator program
    int i = calculadora();
    return i;
}

/*
 * Function: calculadora
 * ----------------------
 * Main calculator logic. Prompts the user to select a mathematical operation
 * and performs the corresponding calculation.
 *
 * Returns: 0 on successful execution.
 */
int calculadora(void)
{
    int n = 0; // Stores the user's choice of operation

    // Display options to the user
   printf("Welcome to the calculator!\n");
   printf("Firstly, choose a math operator: \n 1 - for addition\n 2 - for subtraction\n 3 - for "
           "multiplication\n 4 - for division\n The operation is: ");
   scanf("%i", &n);


    // Validate the user's choice
    if (n <= 0 || n > 4)
    {
        printf("Invalid number\n\n");
        calculadora(); // Recursive call for invalid input
    }
    else
    {
        // Perform the chosen operation
        printf("You must choose two numbers only\n");
        firstnumber = getnumber();
        printf("The first number is: %.3f\n", firstnumber);

        secondnumber = getnumber();
        printf("The second number is: %.3f\n", secondnumber);

        switch (n)
        {
            case 1:
                result = firstnumber + secondnumber;
                printf("The result is: %.3f\n\n", result);
                break;

            case 2:
                result = firstnumber - secondnumber;
                printf("The result is: %.3f\n\n", result);
                break;

            case 3:
                result = firstnumber * secondnumber;
                printf("The result is: %.3f\n\n", result);
                break;

            case 4:
                if (secondnumber != 0)
                {
                    result = firstnumber / secondnumber;
                    printf("The result is: %.3f\n\n", result);
                }
                else
                {
                    printf("Invalid operation, you cannot divide by 0\n\n");
                }
                break;
        }

        // Ask the user if they want to perform another operation
        answer();
    }

    return 0;
}

/*
 * Function: getnumber
 * --------------------
 * Prompts the user to input a number.
 *
 * Returns: The number entered by the user.
 */
float getnumber()
{
    float n1;

    printf("Choose a number: ");
    scanf("%f", &n1);
    printf("\n");

    return n1;
}

/*
 * Function: answer
 * ----------------
 * Asks the user if they want to perform another operation.
 * Restarts the calculator if the answer is "Yes".
 *
 * Returns: 0 on successful execution.
 */
int answer()
{
    char str[6]; // Stores the user's answer

    printf("Do you want to do another math operation? (Yes or No)\n Answer: ");
    scanf("%3s", str);

    if (strcmp(str, "Yes") == 0)
    {
        printf("\n\n");
        calculadora();
    }
    else
    {
        printf("Calculator is OFF\n\n");
    }

    return 0;
}

