#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = 0;
    } else if (units <= 200) {
        bill = (units * 5) / 2; // Only charge for units above 100
    } else if (units <= 300) {
        bill = (100 * 5) + ((units - 200) * 8);
    } else {
        bill = (100 * 5) + (100 * 8) + ((units - 300) * 10);
    }

    printf("The electricity bill is: %.2f rupees\n", bill);

    return 0;
}

