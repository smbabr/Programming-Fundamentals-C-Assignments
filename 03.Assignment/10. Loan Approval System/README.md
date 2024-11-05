# Loan Approval System

## Problem Statement

Write a program that checks a person’s eligibility for a loan based on the following criteria:
- If their monthly income is more than 30,000, they may qualify.
- Check if they have an existing loan. If "Yes," they should not have any overdue payments.
- If the monthly income is less than 30,000, they are ineligible.

## Solution

The program uses nested if-else statements and logical operators to determine the eligibility of the user for the loan. The following conditions are checked:
1. If the monthly income is greater than 30,000.
2. If the user has an existing loan and whether they have overdue payments if they do.

## Code

```c
#include <stdio.h>

int main() {
    int monthlyIncome, overduePayments;
    char existingLoan;

    printf("Enter your monthly income: ");
    scanf("%d", &monthlyIncome);

    if (monthlyIncome > 30000) {
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &existingLoan);
        
        if (existingLoan == 'Y' || existingLoan == 'y') {
            printf("Do you have any overdue payments? (1 for Yes, 0 for No): ");
            scanf("%d", &overduePayments);
            
            if (overduePayments == 0) {
                printf("You are eligible for the loan.\n");
            } else {
                printf("You are not eligible for the loan due to overdue payments.\n");
            }
        } else {
            printf("You are eligible for the loan.\n");
        }
    } else {
        printf("You are ineligible for the loan.\n");
    }

    return 0;
}
```
