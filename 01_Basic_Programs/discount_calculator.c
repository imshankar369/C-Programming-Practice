#include <stdio.h>

int main()
{
    float amount, discount;

    printf("Enter Total Amount: ");
    scanf("%f", &amount);

    if(amount >= 5000)
        discount = amount * 0.20;
    else
        discount = amount * 0.10;

    printf("Discount = %.2f\n", discount);
    printf("Pay = %.2f\n", amount - discount);

    return 0;
}
