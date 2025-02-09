# README - Calculator Program

## Description

This program is a simple calculator that allows the user to perform basic mathematical operations: addition, subtraction, multiplication, and division. The program prompts the user to choose an operation and input two numbers, then displays the result. After each operation, the user can choose to perform another calculation or exit the program.

## How to Run

1. Compile and run the program.
2. The program will prompt you to select a mathematical operation (addition, subtraction, multiplication, or division).
3. Enter two numbers for the operation.
4. The program will display the result of the operation.
5. After the calculation, you can choose to perform another operation or exit the program.

## Pseudocode

```plaintext
START program

    DISPLAY "Welcome to the calculator!"
    PROMPT user to choose a math operator (1 - Addition, 2 - Subtraction, 3 - Multiplication, 4 - Division)

    IF input is invalid:
        DISPLAY "Invalid number"
        RESTART calculator

    PROMPT user to enter two numbers
    DISPLAY first number
    DISPLAY second number

    PERFORM the chosen operation:
        1. Addition
        2. Subtraction
        3. Multiplication
        4. Division (with validation for division by 0)

    ASK the user if they want to perform another operation
    IF user answers "Yes":
        RESTART calculator
    ELSE:
        DISPLAY "Calculator is OFF"

END program
```

## Functions

- `calculadora()`: Main calculator logic that prompts the user for an operation and performs the chosen mathematical operation.
- `getnumber()`: Prompts the user to input a number and returns it.
- `answer()`: Asks the user if they want to perform another operation and restarts the calculator if the answer is "Yes".

## Technologies Used

- C Language
- Standard C Library (math.h, stdlib.h, string.h)

## Author

Developed by [@rduarte12](https://github.com/rduarte12)
