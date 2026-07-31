#include <stdio.h>

int main() {

    int matrix[3][3];
    int *ptr = &matrix[0][0];

    printf("Enter 9 elements:\n");

    for(int i = 0; i < 9; i++)
        scanf("%d", ptr + i);

    printf("Matrix:\n");

    for(int i = 0; i < 9; i++) {

        printf("%d ", *(ptr + i));

        if((i + 1) % 3 == 0)
            printf("\n");
    }

    return 0;
}
