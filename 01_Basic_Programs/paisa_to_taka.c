#include <stdio.h>

int main()
{
    float paisa;

    printf("Enter paisa: ");
    scanf("%f", &paisa);

    printf("Taka = %.2f\n", paisa / 100);

    return 0;
}
