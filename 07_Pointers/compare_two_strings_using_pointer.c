#include <stdio.h>

int compare(char *s1, char *s2)
{
    while(*s1 && *s2)
    {
        if(*s1 != *s2)
            return 0;

        s1++;
        s2++;
    }

    return (*s1 == *s2);
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(compare(str1, str2))
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    return 0;
}
