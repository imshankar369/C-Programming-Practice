#include <stdio.h>

void copy(char *src, char *dest)
{
    while(*src)
        *dest++ = *src++;

    *dest = '\0';
}

int main()
{
    char source[100], destination[100];

    printf("Enter string: ");
    scanf("%s", source);

    copy(source, destination);

    printf("Copied String = %s\n", destination);

    return 0;
}
