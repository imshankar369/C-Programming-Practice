#include <stdio.h>

int countWords(char str[]) {

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        if ((i == 0 || str[i - 1] == ' ') &&
            str[i] != ' ' &&
            str[i] != '\n')
            count++;
    }

    return count;
}

int main() {

    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Total words = %d", countWords(str));

    return 0;
}
