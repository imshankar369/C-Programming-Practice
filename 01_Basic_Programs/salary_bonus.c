#include <stdio.h>

int main()
{
    float salary, bonus;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    if(salary >= 50000)
        bonus = salary * 0.20;
    else
        bonus = salary * 0.10;

    printf("Bonus = %.2f\n", bonus);

    return 0;
}
