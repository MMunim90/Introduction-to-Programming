// no return + no parameter

#include<stdio.h>

void func3()
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

    if(res == 1)
    {
        printf("Even number");
    }
    else if(res == 0)
    {
        printf("Odd number");
    }
}

int main()
{
    func3();

    return 0;
}