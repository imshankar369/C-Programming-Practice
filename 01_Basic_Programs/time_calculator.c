#include <stdio.h>

int main()
{
    float distance, speed, time;

    printf("Enter distance (meter): ");
    scanf("%f", &distance);

    printf("Enter speed (m/s): ");
    scanf("%f", &speed);

    time = distance / speed;

    printf("Time = %.2f second\n", time);

    return 0;
}
