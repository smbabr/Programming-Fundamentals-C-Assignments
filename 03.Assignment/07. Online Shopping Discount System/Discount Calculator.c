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

