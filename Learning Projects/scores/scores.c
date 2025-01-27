/*
*  Project desenvolved by git @rduart12
*  ---------------------------------------
*  Year: 2025
*  Why: Learning about coding
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototype
int get_total();
float average(int lenght, float array[]);

/*
* Function: Calculate the arithmetic mean of a set
* of values, such as students' grades.
* It first determines the total number
* of grades based on user input, then records the
* grades and computes the arithmetic mean.
*/


int main(void)
{

    //Determines the total of scores and registers them.
    int total = get_total();
    float scores[total];
    for( int i = 0; i < total; i++)
    {
        printf("Score %d: ", i);
        scanf("%f", &scores[i]);
        printf("\n");
    }

    printf("Average: %f \n\n", average(total,scores));
}

/*
*----------------------------------------------------------
*/

//Input of total of scores
int get_total()
{
    int t = 0;

    do
    {
        printf("Total of scores: ");
        scanf("%d", &t);

        if(t <= 0)
        {
            printf("Invalid number\n");
        }

    } while(t <= 0);

    return t;
}

//Calculate the average
float average(int lenght, float array[])
{
    float sum = 0;
    for(int a = 0; a < lenght; a++)
    {
        sum = sum + array[a];
    }
    return sum/lenght;
}
