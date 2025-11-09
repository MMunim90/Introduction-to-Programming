#include<stdio.h>

void recursive(int n)
{
    if(n == 10)
    {
        return;
    }
    printf("%d\n", n);
    recursive(n+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    recursive(n);
    return 0;
}