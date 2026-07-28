#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[100];
    int count = 0;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    int len = strlen(sub);

    for (int i = 0; str[i] != '\0'; i++) {
        int j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
            j++;

        if (j == len)
            count++;
    }

    printf("Occurrences = %d", count);

    return 0;
}
