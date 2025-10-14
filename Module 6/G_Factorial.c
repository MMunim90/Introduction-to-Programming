#include<stdio.h>
int main()
{
    int t,n;
    long long int fact=1;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(int j=1; j<=n; j++)
        {
            fact *= j;
        }
        printf("%d\n", fact);
        fact = 1;
    }
    return 0;
}