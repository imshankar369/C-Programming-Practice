#include <stdio.h>
#include <math.h>

int digits(int n)
{
    int count = 0;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    int d = digits(n);

    while (temp != 0)
    {
        sum += pow(temp % 10, d);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
