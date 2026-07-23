#include <stdio.h>

int main()
{
    int unit;
    float bill;

    printf("Enter electricity unit: ");
    scanf("%d", &unit);

    if(unit <= 100)
        bill = unit * 5;

    else if(unit <= 200)
        bill = (100 * 5) + ((unit - 100) * 7);

    else
        bill = (100 * 5) + (100 * 7) + ((unit - 200) * 10);

    printf("Total Bill = %.2f Taka\n", bill);

    return 0;
}
