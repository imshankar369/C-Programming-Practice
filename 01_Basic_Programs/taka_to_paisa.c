#include <stdio.h>

int main()
{
    float taka;

    printf("Enter taka: ");
    scanf("%f", &taka);

    printf("Paisa = %.2f\n", taka * 100);

    return 0;
}
