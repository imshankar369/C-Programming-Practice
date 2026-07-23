#include <stdio.h>

int main()
{
    float speed, time, distance;

    printf("Enter speed (m/s): ");
    scanf("%f", &speed);

    printf("Enter time (second): ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance = %.2f meter\n", distance);

    return 0;
}
