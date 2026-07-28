#include <stdio.h>

int main() {
    char str[500];
    int lines = 1;

    printf("Enter text (Press Enter then Ctrl+Z on Windows / Ctrl+D on Linux):\n");

    while (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n')
                lines++;
        }
    }

    printf("Number of lines = %d\n", lines - 1);

    return 0;
}
