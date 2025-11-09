#include <stdio.h>

void print_array(int a[], int n, int i)
{

    if(i == n)
    {
        return;
    }

    printf("%d\n", a[i]);
    print_array(a, n, i+1);
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

    print_array(arr, n, 0); // 0 is the first index of this array
    return 0;
}