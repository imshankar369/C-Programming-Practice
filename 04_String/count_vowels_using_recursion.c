#include <stdio.h>

int countVowels(char str[], int index) {
    if (str[index] == '\0')
        return 0;

    char ch = str[index];

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1 + countVowels(str, index + 1);

    return countVowels(str, index + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Vowels = %d", countVowels(str, 0));

    return 0;
}
