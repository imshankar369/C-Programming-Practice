#include <stdio.h>

int main()
{
    int seconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    printf("Minutes = %d\n", seconds / 60);

    return 0;
}
