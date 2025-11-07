#include <stdio.h>
#include <limits.h>

void find_min_max(int arr[], int n)
{

    int min = INT_MIN;
    int max = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if(arr[i+1] >= arr[i])
        // {
        //     min = arr[i];
        // }
        // else if(arr[i+1] < arr[i])
        // {
        //     max = arr[i];
        // }
    }

    // for(int i=0; i<n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    find_min_max(arr, n);
    return 0;
}