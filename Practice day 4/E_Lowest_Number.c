#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowest = arr[0];
    int position = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            position = i;
        }   
    }
    printf("%d %d", lowest, position);
    return 0;
}