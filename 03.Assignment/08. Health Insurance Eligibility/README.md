# Health Insurance Eligibility Program

## Problem Statement

Write a program to check if a person is eligible for health insurance based on the following criteria:
- The person must be above 18 years.
- If they are above 45, check if they have had any serious illness (Y/N). If "Y," they are not eligible.

## Solution

The program prompts the user for their age and checks the eligibility based on the specified conditions.

## Code

```c
#include <stdio.h>

int main() {
    int age;
    char seriousIllness;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 18) {
        if (age > 45) {
            printf("Have you had any serious illness (Y/N)? ");
            scanf(" %c", &seriousIllness);
            if (seriousIllness == 'Y' || seriousIllness == 'y') {
                printf("Not eligible for health insurance.\n");
            } else {
                printf("Eligible for health insurance.\n");
            }
        } else {
            printf("Eligible for health insurance.\n");
        }
    } else {
        printf("Not eligible for health insurance.\n");
    }

    return 0;
}
```
