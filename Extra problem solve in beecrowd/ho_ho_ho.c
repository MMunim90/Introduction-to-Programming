#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        printf("Ho");
        if(i == n)
        {
            printf("!\n");
        }
        if(i != n)
        {
            printf(" ");
        }
    }

    return 0;
}