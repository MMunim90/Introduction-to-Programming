#include<stdio.h>

void max_num(int arr[], int n, int max, int i)
{
    if(i==n)
    {
        printf("%d", max);
        return;
    }

    if(max < arr[i])
    {
        max = arr[i];
    }

    max_num(arr, n, max, i+1);

}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    max_num(arr, n, max, 0);
    return 0;
}