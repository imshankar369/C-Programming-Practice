#include <stdio.h>

int main() {
    char str[100];
    int printed[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Duplicate characters: ");

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > 1 && !printed[(unsigned char)str[i]]) {
            printf("%c ", str[i]);
            printed[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}
