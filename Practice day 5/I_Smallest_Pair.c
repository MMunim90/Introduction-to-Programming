#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int res = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            // printf("%d ", arr[i]);
            for(int j=i+1; j<n; j++)
            {
                // printf("%d %d\n", i, arr[j]);

                int val = arr[i] + arr[j] + j - i;
                // printf("%d ", val);

                if(val < res)
                {
                    res = val;
                }
            }
        }

        printf("%d\n", res);
    }
    
    return 0;
}