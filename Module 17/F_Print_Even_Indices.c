#include <stdio.h>

void print_even_indices(int arr[], int n, int i)
{
    int brr[n];

    if(i == n)
    {
        return;
    }

    print_even_indices(arr, n, i+1);

    // if want to use loop for this proble then use it.
    // for (int i = n-1; i >= 0; i--)
    // {
        if (i % 2 == 0)
        {

            brr[i] = arr[i];
            printf("%d ", brr[i]);
        }
    // }

}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_even_indices(arr, n, 0);

    return 0;
}