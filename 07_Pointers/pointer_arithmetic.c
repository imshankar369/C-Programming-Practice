#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer Arithmetic:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Address = %p\tValue = %d\n", (void *)(ptr + i), *(ptr + i));
    }

    return 0;
}
