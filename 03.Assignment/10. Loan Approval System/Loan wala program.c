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

