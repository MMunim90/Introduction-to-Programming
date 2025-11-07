#include <stdio.h>
int main()
{
    int arr[3];
    int arr2[3];

    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= 3; i++)
    {
        arr2[i] = arr[i];
    }

    for (int i = 1; i < 3; i++)
    {
        for (int j = i + 1; j <= 3; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    for (int i = 1; i <= 3; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}