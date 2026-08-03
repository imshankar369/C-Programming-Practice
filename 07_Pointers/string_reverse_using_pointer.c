#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter string: ");
    scanf("%s", str);

    ptr = str;

    while(*ptr)
        ptr++;

    ptr--;

    printf("Reverse String: ");

    while(ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}
