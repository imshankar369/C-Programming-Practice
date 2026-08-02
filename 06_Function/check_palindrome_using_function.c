#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {

    int length = strlen(str);

    if (str[length - 1] == '\n')
        length--;

    for (int i = 0; i < length / 2; i++) {

        if (str[i] != str[length - i - 1])
            return 0;
    }

    return 1;
}

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
