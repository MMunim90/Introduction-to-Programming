// return + no parameter

#include<stdio.h>

int func2()
{
    int n;
    scanf("%d", &n);

    int res = 0;

    if(n % 2 == 0)
    {
        res = 1;
    }
    else if(n % 2 == 1)
    {
        res = 0;
    }

    return res;
}

int main()
{
    int result = func2();

    if(result == 1)
    {
        printf("Even number");
    }
    else if(result == 0)
    {
        printf("Odd number");
    }
    return 0;
}