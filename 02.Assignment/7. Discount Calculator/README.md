# Discount Calculator

This C program takes a total shopping amount as input, calculates the applicable discount, and outputs the final amount after applying the discount. The discount is determined as follows:

- **20% discount** if the total amount is greater than 5000.
- **10% discount** if the total amount is between 3000 and 5000.
- **No discount** if the total amount is less than 3000.

## Code

```c
#include <stdio.h>

int main() {
    float totalAmount, finalAmount;

    printf("Enter total shopping amount: ");
    scanf("%f", &totalAmount);

    if (totalAmount > 5000)
        finalAmount = totalAmount * 0.80;
    else if (totalAmount >= 3000)
        finalAmount = totalAmount * 0.90;
    else
        finalAmount = totalAmount;

    printf("Final amount after discount: %.2f\n", finalAmount);
    
    return 0;
}
```

## How to Use
1.Input the Total Amount: When prompted, enter the total shopping amount you wish to calculate the discount for.

2.Calculate the Discount: The program will automatically calculate the discount based on the entered amount using the specified conditions.

3.View the Final Amount: After the calculation, the program will display the final amount after applying any applicable discounts.

4.Repeat as Needed: You can run the program again to calculate discounts for different shopping amounts.
