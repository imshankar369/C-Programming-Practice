#include <stdio.h>

void concatenate(char str1[], char str2[]) {

    int i = 0, j = 0;

    while (str1[i] != '\0')
        i++;

    if (i > 0 && str1[i - 1] == '\n')
        i--;

    while (str2[j] != '\0' && str2[j] != '\n') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {

    char str1[200], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    concatenate(str1, str2);

    printf("Concatenated String: %s", str1);

    return 0;
}
