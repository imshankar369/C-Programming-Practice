#include <stdio.h>

int main()
{
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    printf("%d Hour %d Minute %d Second\n", hours, minutes, remainingSeconds);

    return 0;
}
