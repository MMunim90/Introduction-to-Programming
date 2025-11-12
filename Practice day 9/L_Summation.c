#include <stdio.h>

void summation(long long int arr[], int n, long long int sum, int i)
{
    if (n == 0)
    {
        printf("%lld\n", sum);
        return;
    }

    sum += arr[i];

    summation(arr, n - 1, sum, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int i = 0;
    long long int sum = 0;
    summation(arr, n, sum, i);
    return 0;
}