#include<stdio.h>

void max_number(int arr[], int n, int max)
{
    if(n == 0)
    {
        printf("%d", max);
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    max_number(arr, n-1, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    max_number(arr, n, max);

    return 0;
}