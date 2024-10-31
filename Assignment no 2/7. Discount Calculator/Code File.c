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
