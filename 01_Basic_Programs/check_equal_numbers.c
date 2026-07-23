#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a == b)
        printf("Both numbers are Equal.\n");
    else
        printf("Both numbers are Not Equal.\n");

    return 0;
}
