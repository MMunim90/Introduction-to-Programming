#include<stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a + b;
    return res;
}

int main()
{
    int result = sum();
    printf("%d", result);
    return 0;
}