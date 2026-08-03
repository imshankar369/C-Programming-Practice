#include <stdio.h>

int main()
{
    int n, key, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    printf("Enter value to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(*(ptr + i) == key)
        {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element Not Found\n");

    return 0;
}
