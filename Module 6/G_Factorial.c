#include<stdio.h>
int main()
{
    long long int t, n, fact=1;
    scanf("%lld", &t);

    for(int i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        for(int j=1; j<=n; j++)
        {
            fact *= j;
        }
        printf("%lld\n", fact);
        fact = 1;
    }
    return 0;
}