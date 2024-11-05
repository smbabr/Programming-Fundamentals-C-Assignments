# Online Shopping Discount System

## Problem Statement

Write a program to calculate the final amount after discount based on the following conditions:

- If the purchase amount is greater than 2000:
  - Check if the user is a member.
    - If they are a member, apply a 20% discount.
    - If they are not a member, apply a 10% discount.
- If the purchase amount is less than or equal to 2000, apply no discount.

## Concepts Used

- Nested if-else statements
- Logical operators
- Arithmetic operations

## Solution

Here is the C code that implements the above logic:

```c
#include <stdio.h>

int main() {
    float purchaseAmount, finalAmount;
    int isMember;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);
    printf("Are you a member? (1 for Yes, 0 for No): ");
    scanf("%d", &isMember);

    if (purchaseAmount > 2000) {
        if (isMember) {
            finalAmount = purchaseAmount - (purchaseAmount * 0.20);
        } else {
            finalAmount = purchaseAmount - (purchaseAmount * 0.10);
        }
    } else {
        finalAmount = purchaseAmount;
    }

    printf("The final amount after discount is: %.2f\n", finalAmount);
    return 0;
}
```
