#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n], brr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            brr[i] = arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (brr[i] > brr[j])
                {
                    int temp = brr[i];
                    brr[i] = brr[j];
                    brr[j] = temp;
                }
            }
        }

        int crr[n];

        for (int i = 0; i < n; i++)
        {
            crr[i] = abs(arr[i] - brr[i]);
            printf("%d ", crr[i]);
        }
        printf("\n");
    }

    return 0;
}