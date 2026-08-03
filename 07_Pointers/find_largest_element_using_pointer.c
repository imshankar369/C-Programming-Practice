#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    int max = *ptr;

    for(int i = 1; i < n; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Largest = %d\n", max);

    return 0;
}
