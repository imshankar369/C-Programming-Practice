#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter compressed string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        if (isalpha(str[i])) {
            char ch = str[i];
            int count = 0;
            i++;

            while (isdigit(str[i])) {
                count = count * 10 + (str[i] - '0');
                i++;
            }

            i--;

            for (int j = 0; j < count; j++)
                printf("%c", ch);
        }
    }

    return 0;
}
