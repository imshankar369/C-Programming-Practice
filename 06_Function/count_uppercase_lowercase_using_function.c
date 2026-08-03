#include <stdio.h>

void countCase(char str[])
{
    int upper = 0, lower = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;

        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCase(str);

    return 0;
}
