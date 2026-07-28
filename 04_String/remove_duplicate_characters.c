#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (!visited[ch]) {
            visited[ch] = 1;
            printf("%c", ch);
        }
    }

    return 0;
}
