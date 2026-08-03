#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    reverse(str);

    printf("Reversed String = %s\n", str);

    return 0;
}
