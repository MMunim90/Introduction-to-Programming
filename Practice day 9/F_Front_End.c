#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        printf("%d ", arr[start]);

        printf("%d ", arr[end]);

        start++;
        end--;
    }
    
    if(n % 2 != 0)
    {
        printf("%d ", arr[start]);
    }
    return 0;
}