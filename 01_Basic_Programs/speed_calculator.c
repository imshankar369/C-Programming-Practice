#include <stdio.h>

int main()
{
    float distance, time, speed;

    printf("Enter distance (meter): ");
    scanf("%f", &distance);

    printf("Enter time (second): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed = %.2f m/s\n", speed);

    return 0;
}
