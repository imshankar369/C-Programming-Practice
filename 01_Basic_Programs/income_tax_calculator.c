#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter Annual Income: ");
    scanf("%f", &income);

    if(income > 500000)
        tax = income * 0.10;
    else
        tax = 0;

    printf("Tax = %.2f\n", tax);

    return 0;
}
