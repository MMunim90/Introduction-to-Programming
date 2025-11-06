#include <stdio.h>

int arr_return()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        return arr[i];
    }
}

int main()
{
    int val = arr_return();
    printf("%d ", val);
    return 0;
}