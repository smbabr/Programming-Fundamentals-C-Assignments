#include <stdio.h>

int main() {
    int steps[24], totalSteps = 0, maxSteps = 0, minSteps = 0, maxHour = 0, minHour = 0;
    
	float averageSteps;
    

    for (int i = 0; i < 24; i++) {
        printf("Enter steps for hour %d: ", i + 1);
        scanf("%d", &steps[i]);
        totalSteps += steps[i];
        
        if (steps[i] > maxzdSteps || i == 0) {
            maxSteps = steps[i];
            maxHour = i + 1;
        }

        if (steps[i] < minSteps || i == 0) {
            minSteps = steps[i];
            minHour = i + 1;
        }

        if (steps[i] == 0) {
            printf("No steps recorded in hour %d (inactivity detected).\n", i + 1);
        }
    }

    averageSteps = totalSteps / 24.0;

    printf("\nTotal steps taken in the day: %d\n", totalSteps);
    printf("Average steps per hour: %.2f\n", averageSteps);
    printf("Hour with maximum steps: %d (%d steps)\n", maxHour, maxSteps);
    printf("Hour with minimum steps: %d (%d steps)\n", minHour, minSteps);

    return 0;
}

