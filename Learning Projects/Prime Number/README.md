# README - Prime Number Verifier

## Description

This program checks whether a given natural number is prime. The user is prompted to enter a natural number, and the program determines if it is prime by checking for divisibility. If the number is prime, the program will inform the user; otherwise, it will indicate that the number is not prime. The program ensures that only valid natural numbers are accepted as input.

## How to Run

1. Compile and run the program.
2. Enter a natural number to check if it's prime.
3. The program will verify if the number is prime and display the result.
4. If an invalid (non-natural) number is entered, the program will ask for input again.

## Pseudocode

```plaintext
START program

    PROMPT user to enter a natural number
    IF the input is not a natural number:
        DISPLAY "Invalid number" and ask for input again

    SET divisor to the number - 1

    REPEAT:
        CALCULATE the remainder when dividing the number by divisor
        IF remainder is not 0:
            DECREMENT divisor
        ELSE:
            DISPLAY "The number is not prime"
            SET divisor to 0
    UNTIL divisor equals 1

    IF divisor equals 1:
        DISPLAY "The number is prime"

END program
```

## Technologies Used

- C Language
- Standard C Library (stdlib.h, stdio.h)

## Author

Developed by [@rduarte12](https://github.com/rduarte12)
