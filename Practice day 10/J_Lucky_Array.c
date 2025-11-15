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

    int min_number = arr[0];
    int count_min = 0;

    for (int i = 0; i < n; i++)
    {
        if (min_number >= arr[i])
        {
            min_number = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_number)
        {
            count_min++;
        }
    }

    if (count_min % 2 == 0)
    {
        printf("Unlucky");
    }
    else if (count_min % 2 != 0)
    {
        printf("Lucky");
    }

    return 0;
}