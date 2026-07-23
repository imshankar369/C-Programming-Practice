#include <stdio.h>

int main()
{
    float principal, rate, amount;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter annual rate (%%): ");
    scanf("%f", &rate);

    amount = principal + (principal * rate / 100);

    printf("Amount after 1 year = %.2f\n", amount);

    return 0;
}
