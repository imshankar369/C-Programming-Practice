#include <stdio.h>

int length(char *str)
{
    int len = 0;

    while(*str++)
        len++;

    return len;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length = %d\n", length(str) - 1);

    return 0;
}
