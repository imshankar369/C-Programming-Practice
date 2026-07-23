#include <stdio.h>

int main()
{
    int hours;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Minutes = %d\n", hours * 60);

    return 0;
}
