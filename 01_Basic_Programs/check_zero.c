#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0)
        printf("The number is Zero.\n");
    else
        printf("The number is Not Zero.\n");

    return 0;
}
