#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("YES");
        return 0;
    }
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // printf("%d", original);

    // int original, reverse;

    // for (int i = 0; i < n; i++)
    // {
    //         // printf("%d ", arr[i]);
    //     original = arr[i];
    // }

    // // printf("\n");

    // for (int j = n-1; j >= 0; j--)
    // {
    //     // printf("%d ", arr[j]);
    //     reverse = arr[j];
    // }

    //     if(original == reverse)
    //     {
    //         printf("YES");
    //     }
    //     else
    //     {
    //         printf("NO");
    //     }

    //<---------------->
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        arr[i] == arr[j];
        i++;
        j--;

        if (arr[i] == arr[j])
        {
            printf("YES");
            break;
        }
        else
        {
            printf("NO");
            break;
        }
    }

    return 0;
}