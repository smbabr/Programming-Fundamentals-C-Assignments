# Digital Step Counter 🏃‍♂️

## Overview

The **Digital Step Counter** project is a simple fitness application designed for a smartwatch. It records the number of steps taken every hour and analyzes the data at the end of the day. This program helps users track their physical activity and encourages them to stay active.

## Scenario

In today’s fast-paced world, fitness tracking has become essential. This smartwatch application collects step data throughout the day, allowing users to monitor their activity levels. By analyzing the data, users can make informed decisions about their fitness routines and identify areas for improvement.

## Problem Statement

The goal of this project is to develop a program that takes the number of steps recorded for each hour of the day (24 inputs) and performs the following calculations:

- **Total Steps Taken**: Calculate the sum of steps recorded over the 24-hour period.
- **Average Steps Per Hour**: Determine the average number of steps taken each hour.
- **Peak Hours**: Identify the hour with the maximum and minimum steps recorded during the day.

## Requirements

To successfully implement the Digital Step Counter, the following requirements must be met:

- **Data Input**: Use a for loop to input the number of steps for each hour.
- **Data Analysis**: Utilize variables to track:
  - Total steps
  - Average steps per hour
  - Hour with maximum steps
  - Hour with minimum steps
- **User Feedback**: Implement a check to determine if there are any hours with zero steps recorded, indicating inactivity.

## Challenge

As an added challenge, the program should display a message if any hour has zero steps recorded. This feature serves as a reminder for users to stay active and encourages them to meet their fitness goals.

## Conclusion

The Digital Step Counter project not only provides an engaging way to learn about programming concepts such as loops and data analysis, but it also promotes healthy habits by encouraging users to track their daily activity. By the end of this assignment, users will gain valuable experience in developing real-world applications that can be further expanded with additional features, such as goal-setting and daily summaries.

---

## CODE

```c
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
```
