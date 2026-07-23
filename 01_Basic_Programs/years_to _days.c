#include <stdio.h>

int main()
{
    int years;

    printf("Enter years: ");
    scanf("%d", &years);

    printf("Days = %d\n", years * 365);

    return 0;
}
