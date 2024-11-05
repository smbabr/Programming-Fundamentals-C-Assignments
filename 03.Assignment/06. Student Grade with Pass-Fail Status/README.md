# Student Grade Calculation Program

## Problem Statement

Write a program that takes a student's marks in three subjects. Calculate the average and determine if they pass based on the following conditions:

- If the average is below 50, they fail.
- If the average is above 75, they get an "A".
- If the average is between 50 and 75, they get a "B".

## Concepts Used

- Nested if-else
- Relational operators

## Solution

The program calculates the average of three subject marks inputted by the user and checks against the defined criteria to determine pass/fail status and grade.

### C Code

```c
#include <stdio.h>


int main() {
    float marks1, marks2, marks3, average;
    char grade;

    printf("Enter marks for three subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%f", &marks1);
    printf("Subject 2: ");
    scanf("%f", &marks2);
    printf("Subject 3: ");
    scanf("%f", &marks3);

    average = (marks1 + marks2 + marks3) / 3;

    if (average < 50) {
        printf("Average: %.2f - Status: Fail\n", average);
    } else {
        if (average > 75) {
            grade = 'A';
        } else {
            grade = 'B';
        }
        printf("Average: %.2f - Status: Pass - Grade: %c\n", average, grade);
    }

    return 0;
}

```

## EXAMPLE OUTPUT

```yaml
Enter marks for three subjects (out of 100):
Subject 1: 80
Subject 2: 70
Subject 3: 90
Average: 80.00 - Status: Pass - Grade: A
```
