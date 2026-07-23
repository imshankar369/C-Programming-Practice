#include <stdio.h>

int main()
{
    int minutes;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Seconds = %d\n", minutes * 60);

    return 0;
}
