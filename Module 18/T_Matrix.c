#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum_of_md = 0;
    int sum_of_sd = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                sum_of_md += arr[i][j];
                // printf("%d ", arr[i][j]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                sum_of_sd += arr[i][j];
                // printf("%d ", arr[i][j]);
                // printf("%d %d\n", i, j);
            }
        }
    }

    // printf("%d\n", sum_of_md);
    // printf("%d\n", sum_of_sd);

    int diff = abs(sum_of_md - sum_of_sd);

    printf("%d", diff);

    return 0;
}