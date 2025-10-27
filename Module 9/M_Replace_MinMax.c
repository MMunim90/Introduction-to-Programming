#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        else if (max <= arr[i])
        {
            max = arr[i];
        }
    }

    int temp = min;
    min = max;
    max = temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
        }
        else if (arr[i] == min)
        {
            arr[i] = max;
        }

        printf("%d ", arr[i]);
    }

    return 0;
}