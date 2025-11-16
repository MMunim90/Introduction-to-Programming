#include<stdio.h>
int main()
{
    int a;
    long long int b, multiply;

    scanf("%d %lld", &a, &b);

    multiply = a * b;

    printf("%lld", multiply);

    return 0;
}