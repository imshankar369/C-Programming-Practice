#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int balance = 0;

    printf("Enter expression: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '(')
            balance++;
        else if (str[i] == ')')
            balance--;

        if (balance < 0) {
            printf("Not Balanced");
            return 0;
        }
    }

    if (balance == 0)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}
