#include <stdio.h>

int compare(char str1[], char str2[]) {

    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0') {

        if (str1[i] != str2[i])
            return 0;

        i++;
    }

    return 1;
}

int main() {

    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (compare(str1, str2))
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}
