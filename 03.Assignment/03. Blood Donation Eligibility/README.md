# Blood Donation Eligibility Program

This program determines if a person is eligible to donate blood based on their age and weight.

## Problem Statement

The program checks if an individual meets the following conditions to be eligible for blood donation:
- The person must be **between 18 and 65 years of age**.
- The person must weigh **at least 50 kg**.

If both conditions are satisfied, the individual is eligible to donate blood. Otherwise, they are not eligible.

## Concepts Used

This program demonstrates the use of:
- **Nested if-else statements** for condition checks.
- **Relational operators** to compare age and weight.

# CODE

```c
#include <stdio.h>

int main() {
    int age;
    float weight;

    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    
    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("You are eligible to donate blood.\n");
        } else {
            printf("You are not eligible to donate blood due to insufficient weight.\n");
        }
    } else {
        printf("You are not eligible to donate blood due to age restrictions.\n");
    }

    return 0;
}
```


## Code Explanation

1. The program takes the **age** and **weight** of the person as input.
2. It then verifies if the age is within the eligible range of **18 to 65 years**.
   - If true, it proceeds to check the weight.
   - If the weight is **50 kg or more**, the person is eligible.
   - Otherwise, if the weight is less than **50 kg**, the person is ineligible.
3. If the age is outside the specified range, the program informs the user of ineligibility due to age.

## Sample Output

```c
Enter your age: 25
Enter your weight in kg: 55
You are eligible to donate blood.

Enter your age: 30
Enter your weight in kg: 45
You are not eligible to donate blood due to insufficient weight.

Enter your age: 70
Enter your weight in kg: 70
You are not eligible to donate blood due to age restrictions.
```
