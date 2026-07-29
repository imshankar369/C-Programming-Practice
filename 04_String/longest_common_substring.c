#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int max = 0, end = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int dp[101][101] = {0};

    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {

            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                if (dp[i][j] > max) {
                    max = dp[i][j];
                    end = i;
                }
            }
        }
    }

    printf("Longest Common Substring: ");

    for (int i = end - max; i < end; i++)
        printf("%c", str1[i]);

    return 0;
}
