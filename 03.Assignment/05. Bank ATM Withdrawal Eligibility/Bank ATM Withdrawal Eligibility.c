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
    } else {
        printf("Insufficient balance for this withdrawal.\n");
    }

    return 0;
}

