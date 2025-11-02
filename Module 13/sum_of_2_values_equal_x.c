#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // printf("%d\n", arr[i]);

        for (int j = i + 1; j < n; j++)
        {
            // printf("%d : %d\n", arr[i], arr[j]);
            if (arr[i] + arr[j] == x)
            {
                printf("%d : %d\n", arr[i], arr[j]);
                count = 1;
            }
        }
    }

    if (count)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}