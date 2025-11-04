// return + parameter

#include<stdio.h>

int func1(int a)
{
    int res = 0;

    if(a % 2 == 0)
    {
        res = 1;
    }
    else if(a % 2 == 1)
    {
        res = 0;
    }

    return res;
}

int main()
{
    int a;
    scanf("%d", &a);
    int res = func1(a);
    
    if(res == 1)
    {
        printf("Even number");
    }
    else if(res == 0)
    {
        printf("Odd number");
    }
    return 0;
}