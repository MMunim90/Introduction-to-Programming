#include<stdio.h>

void love(int n)
{
    int i=0;

    if(i == n)
    {
        return;
    }

    love(n-1);
    printf("I love Recursion\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    love(n);
    return 0;
}