#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=n-1, j=0; i>=0, j<n; i--, j++)
    {
        // arr[j] + a[i];
        printf("%d ", arr[j] + a[i]);
    }
    return 0;
}