#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[]) {

    int count[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {

        if (str1[i] != '\n')
            count[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {

        if (str2[i] != '\n')
            count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {

        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {

    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (isAnagram(str1, str2))
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
