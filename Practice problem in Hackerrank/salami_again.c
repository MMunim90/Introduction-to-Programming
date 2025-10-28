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

    int max = 0;
    
    for(int i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    
    int diff[n];

    for(int i=0; i<n; i++)
    {
        diff[i] = max - arr[i];
        printf("%d ", diff[i]);
    }
    return 0;
}