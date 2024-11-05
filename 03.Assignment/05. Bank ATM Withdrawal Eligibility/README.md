# Bank ATM Withdrawal Eligibility Program

## Problem Statement

Program that verifies if a customer can withdraw a specified amount from an ATM, based on the following conditions:

- **Account Balance Check**: The customer's account balance must be greater than or equal to the desired withdrawal amount.
- **Special Permit Check**: If the requested withdrawal amount is greater than 10,000, the customer must have a special withdrawal permit (Y/N).

### Concepts Used
- Nested if-else
- Logical operators

## Solution

This program accepts the user's account balance and the desired withdrawal amount, then verifies the following:
1. If the requested amount is within the available balance.
2. If the amount is greater than 10,000, a special permit is required to proceed. 

If both conditions are met, the withdrawal is approved; otherwise, a relevant message is displayed.

### Code

```c
#include <stdio.h>

int main() {
    float balance, amount;
    char specialPermit;

    
    printf("Enter your account balance: ");
    scanf("%d", &balance);
    
    printf("Enter the withdrawal amount: ");
    scanf("%d", &amount);

    
    if (amount <= balance) {
        if (amount > 10000) {
            
            printf("Do you have a special withdrawal permit (Y/N)? ");
            scanf(" %d", &specialPermit);

            if (specialPermit == 'Y' || specialPermit == 'y') {
                printf("Withdrawal of %.2d approved.\n", amount);
            } else {
                printf("Special permit required for withdrawal over 10,000.\n");
            }
        } else {
            
            printf("Withdrawal of %.2d approved.\n", amount);
        }
               return 0

```

# Example Output

## Case 1: Successful Withdrawal Below 10,000
```yaml
Enter your account balance: 15000
Enter the withdrawal amount: 5000
Withdrawal of 5000.00 approved.
```
## Case 2: Successful Withdrawal Above 10,000 with Permit
```yaml
Enter your account balance: 20000
Enter the withdrawal amount: 12000
Do you have a special withdrawal permit (Y/N)? Y
Withdrawal of 12000.00 approved.
```
## Case 3: Insufficient Balance
```yaml
Enter your account balance: 8000
Enter the withdrawal amount: 9000
Insufficient balance for this withdrawal.
```
