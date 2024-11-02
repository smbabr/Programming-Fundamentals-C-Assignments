# Admission Eligibility Checker

This program helps determine if a student meets the eligibility criteria for admission. Additionally, if the student qualifies with a higher score, they may also be eligible for a scholarship. 

---

## Problem Statement

The **Admission Eligibility Checker** program evaluates a student's eligibility for admission based on their performance in **Math** and **Science**. The criteria are as follows:
- The student must have **at least 50%** in both Math and Science subjects to be eligible for admission.
- If the student's score in both subjects is **above 80%**, they also qualify for a **scholarship**.

This program utilizes foundational programming concepts, including:
- **Nested if-else** statements to handle multiple conditions
- **Logical operators** for combining conditions
- **Relational operators** for comparison

---

# Code

```c
#include <stdio.h>

int main() {
    float maths, science, total;

    printf("Enter marks obtained in Maths: ");
    scanf("%f", &maths);
    printf("Enter marks obtained in Science: ");
    scanf("%f", &science);

    total = maths + science;

    if (total >= 50) {
        printf("Eligible for admission.\n");

        if (total >= 80) {
            printf("Eligible for scholarship.\n");
        } else {
            printf("Not eligible for scholarship.\n");
        }
    } else {
        printf("Not eligible for admission.\n");
    }

    return 0;
}

```

## How to Use

### 1. Input Requirements
The program prompts the user to enter two scores:
- **Math Score** (as a percentage, e.g., 75)
- **Science Score** (as a percentage, e.g., 65)

These inputs must be valid percentage values (0–100).

### 2. Running the Program
After entering the scores, the program checks:
- If both scores are **50% or higher**, the student qualifies for admission.
- If both scores are **above 80%**, the student also qualifies for a scholarship.

### 3. Output
The program outputs one of the following messages based on the input:
- **"Eligible for admission and scholarship."** if both scores are above 80%.
- **"Eligible for admission only."** if both scores are at least 50% but one or both are 80% or below.
- **"Not eligible for admission."** if either of the scores is below 50%.


## Code Structure
### Main Logic

The program follows a straightforward structure:

1. Input Section: Accepts and validates input for Math and Science scores.
  
2. Eligibility Check: Uses nested if-else conditions to determine admission eligibility and scholarship qualification.

3. Output Section: Displays a message based on eligibility status.

