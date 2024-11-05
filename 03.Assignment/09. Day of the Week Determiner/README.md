# Day of the Week Determiner

## Problem Statement
Write a program to ask for a number (1-7) and display the day of the week. If the number is outside 1-7, print "Invalid input".

## Solution
The program takes an integer input from the user. It uses an if-else statement to validate the input. If the input is within the range of 1 to 7, it employs a switch statement to determine and print the corresponding day of the week. If the input is outside this range, it prints an error message.

## Code
```c
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    if (day < 1 || day > 7) {
        printf("Invalid input\n");
    } else {
        switch (day) {
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
            case 7: printf("Sunday\n"); break;
        }
    }

    return 0;
}
```
