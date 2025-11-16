#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int positive_sum = 0;
    int negative_sum = 0;
    for(int i=1; i<=n; i++)
    {
        int a;
        scanf("%d", &a);
        if(a > 0)
        {
            positive_sum += a;
        }
        if(a <= 0)
        {
            negative_sum += a;
        }
    }
    printf("%d %d", positive_sum, negative_sum);
    return 0;
}