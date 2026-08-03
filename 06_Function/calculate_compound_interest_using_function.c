#include <stdio.h>
#include <math.h>

float compoundInterest(float p, float r, float t)
{
    return p * pow((1 + r / 100), t) - p;
}

int main()
{
    float p, r, t;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Compound Interest = %.2f\n", compoundInterest(p, r, t));

    return 0;
}
