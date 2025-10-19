// print value reverse, not index
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
    for(int i=0; i<n; i++)
    {
        printf("%d  ", i);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int i = 0, j = n-1;
    while (i<j)
    {
        //with third variable
        // int tmp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = tmp;

        //without third variable
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];

        i++;
        j--;
    }

    // if i do this same thing in a for loop 
    // for(int i=0, j=n-1; i<j; i++,j--)
    // {
    //     arr[i] = arr[i] + arr[j];
    //     arr[j] = arr[i] - arr[j];
    //     arr[i] = arr[i] - arr[j];
    // }

    for(int i=0; i<n; i++)
    {
        printf("%d  ", i);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}