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
    int find;
    scanf("%d", &find);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            printf("%d", i);
            break;
        }
        while (arr[i] == arr[n - 1])
        {
            printf("-1");
            break;
        }
    }
    return 0;
}