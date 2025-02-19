#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float speed, distance, time;

    // Menu to choose the calculation
    printf("Choose what to calculate:\n");
    printf("0. Exit.\n");
    printf("1. Calculate Time (given Distance and Speed)\n");
    printf("2. Calculate Distance (given Speed and Time)\n");
    printf("3. Calculate Speed (given Distance and Time)\n");
    printf("Enter your choice (0/1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 0: exit(0);
        break;
        case 1:  // Calculate Time
            printf("Enter the Distance (in km or m): ");
            scanf("%f", &distance);
            printf("Enter the Speed (in km/h or m/s): ");
            scanf("%f", &speed);
            if (speed != 0) {
                time = distance / speed;
                printf("Time = %.2f hours (or seconds)\n", time);
            } else {
                printf("Speed cannot be zero!\n");
            }
            break;

        case 2:  // Calculate Distance
            printf("Enter the Speed (in km/h or m/s): ");
            scanf("%f", &speed);
            printf("Enter the Time (in hours or seconds): ");
            scanf("%f", &time);
            distance = speed * time;
            printf("Distance = %.2f km (or meters)\n", distance);
            break;

        case 3:  // Calculate Speed
            printf("Enter the Distance (in km or m): ");
            scanf("%f", &distance);
            printf("Enter the Time (in hours or seconds): ");
            scanf("%f", &time);
            if (time != 0) {
                speed = distance / time;
                printf("Speed = %.2f km/h (or m/s)\n", speed);
            } else {
                printf("Time cannot be zero!\n");
            }
            break;

        default:
            printf("Invalid choice! Please enter 0, 1, 2, or 3.\n");
            break;
    }

    return 0;
}
