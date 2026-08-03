#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n)
{
    int first = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Second Largest = %d\n", secondLargest(arr, n));

    return 0;
}
