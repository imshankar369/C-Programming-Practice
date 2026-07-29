#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    printf("\n1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenate\n");
    printf("4. Compare\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String: %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated String: %s", str1);
            break;

        case 4:
            if (strcmp(str1, str2) == 0)
                printf("Strings are Equal");
            else
                printf("Strings are Not Equal");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
