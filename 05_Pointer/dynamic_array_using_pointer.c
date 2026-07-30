#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    printf("Array elements:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    free(ptr);

    return 0;
}
