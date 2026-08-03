#include <stdio.h>

void count(int arr[], int n)
{
    int positive = 0, negative = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
            positive++;
        else
            negative++;
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
}

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    count(arr, n);

    return 0;
}
