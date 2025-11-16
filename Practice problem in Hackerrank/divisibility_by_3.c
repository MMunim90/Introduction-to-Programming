#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d ", n);

    int a;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
    }
    // for(int i=0; i<n; i++)
    // {
    //     printf("%d", a);
    // }

    int count = 0;

    for(int i=1; i<=n; i++)
    {
        // printf("%d\n", a);
        int x = a % 10;
        count = count + x;
        a = a / 10;
        // printf("%d\n", n);
    }

    if(count % 3 == 0)
    {
        // printf("%d\n", count);
        printf("YES");
    }
    else
    {
        // printf("%d\n", count);
        printf("NO");
    }
    return 0;
}