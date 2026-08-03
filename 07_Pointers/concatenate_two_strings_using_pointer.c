#include <stdio.h>

void concatenate(char *s1, char *s2)
{
    while(*s1)
        s1++;

    while(*s2)
        *s1++ = *s2++;

    *s1 = '\0';
}

int main()
{
    char str1[200], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    concatenate(str1, str2);

    printf("Result = %s\n", str1);

    return 0;
}
