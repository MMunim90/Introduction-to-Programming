#include<stdio.h>
int main()
{
    long long int m, n;

    scanf("%lld %lld", &m, &n);

    long long int last_m = m % 10;
    long long int last_n = n % 10;

    printf("%d\n", last_m+last_n);
    return 0;
}