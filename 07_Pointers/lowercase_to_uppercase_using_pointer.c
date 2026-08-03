#include <stdio.h>

void convert(char *str)
{
    while(*str)
    {
        if(*str >= 'a' && *str <= 'z')
            *str -= 32;

        str++;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    convert(str);

    printf("Uppercase = %s\n", str);

    return 0;
}
