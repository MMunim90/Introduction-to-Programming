#include<stdio.h>

void reverse(int arr[], int n)
{
    // for(int i=n-1; i>=0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }


    //two pointers technique
    int i=0, j=n-1;

    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
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
    // for(int i=0; i<n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    
    reverse(arr, n);


    return 0;
}