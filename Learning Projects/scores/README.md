Here's a README in English for the arithmetic mean calculator program:

# README - Arithmetic Mean Calculator

## Description

This program calculates the arithmetic mean (average) of a set of values, such as student grades. The user is prompted to input the total number of grades, followed by the individual grades. The program then calculates and displays the arithmetic mean of the entered values.

## How to Run

1. Compile and run the program.
2. Enter the total number of grades (must be a positive integer).
3. Input each grade when prompted.
4. The program will calculate and display the arithmetic mean (average) of the grades.

## Pseudocode

```plaintext
START program

    PROMPT user to enter the total number of scores
    IF the number of scores is invalid (<= 0):
        DISPLAY "Invalid number" and ask for input again

    FOR each score from 1 to the total number of scores:
        PROMPT user to enter the score
        STORE the score

    CALCULATE the average by summing all scores and dividing by the total number of scores
    DISPLAY the calculated average

END program
```

## Functions

- `get_total()`: Prompts the user to input the total number of scores and ensures that the input is a positive integer.
- `average()`: Calculates and returns the arithmetic mean of an array of values.

## Technologies Used

- C Language
- Standard C Library (stdio.h, stdlib.h, string.h)

## Author

Developed by Rafael Mendonça Duarte.
