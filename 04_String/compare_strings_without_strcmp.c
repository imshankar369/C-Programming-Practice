#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        i++;

    if (str1[i] == str2[i])
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");

    return 0;
}
