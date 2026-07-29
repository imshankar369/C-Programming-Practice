#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, maxLen = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {

        for (int j = i; j < len; j++) {

            int left = i;
            int right = j;
            int palindrome = 1;

            while (left < right) {
                if (str[left] != str[right]) {
                    palindrome = 0;
                    break;
                }
                left++;
                right--;
            }

            if (palindrome && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    printf("Longest Palindrome: ");

    for (int i = start; i < start + maxLen; i++)
        printf("%c", str[i]);

    return 0;
}
