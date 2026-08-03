#include <stdio.h>

void convert(char *str)
{
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
            *str += 32;

        str++;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    convert(str);

    printf("Lowercase = %s\n", str);

    return 0;
}
