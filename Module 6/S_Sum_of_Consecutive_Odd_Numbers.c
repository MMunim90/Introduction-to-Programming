#include <stdio.h>
int main()
{
    int x, y, odd = 0;
    scanf("%d %d", &x, &y);

    // for (int i = x; i >= y; i--)
    // {
    //     if (i % 2 == 1)
    //     {
    //         odd += i;
    //     }
    // }
    // printf("%d", odd);

    // if (x == y || x+1 == y || y+1 == x)
    // {
    //     printf("0\n");
    // }
    if(x > y)
    {
        for(int i=x; i>=y; i--)
        {
            if(i % 2 == 1)
            {
                odd += i;
            }
        }
        printf("%d", odd);
    }
    else if(y > x)
    {
        for(int i=x; i<=y; i++)
        {
            if(i % 2 == 1)
            {
                odd += i;
            }
        }
        printf("%d", odd);
    }
    return 0;
}