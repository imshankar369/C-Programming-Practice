#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {

        if (tolower(str1[i]) != tolower(str2[i])) {
            printf("Strings are not equal");
            return 0;
        }

        i++;
    }

    printf("Strings are equal");

    return 0;
}
