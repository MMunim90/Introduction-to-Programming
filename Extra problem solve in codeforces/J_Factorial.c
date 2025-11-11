#include<stdio.h>

void factorial(int n, long long int fact)
{
    if(n == 0)
    {
        printf("%lld", fact);
        return;
    }

    fact *= n;
    factorial(n-1, fact);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int fact = 1;

    factorial(n, fact);
    return 0;
}