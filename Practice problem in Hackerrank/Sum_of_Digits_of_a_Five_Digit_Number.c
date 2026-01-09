#include<stdio.h>
int sum = 0;

void sum_digit(int n)
{
    if(n == 0)
    {
        printf("%d\n", sum);
        return;
    }
    int i = n%10;
    sum += i;
    sum_digit(n/10);
}

int main()
{
    int n; scanf("%d", &n);
    sum_digit(n);
    return 0;
}