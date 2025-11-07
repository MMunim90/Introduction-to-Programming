#include<stdio.h>

void calculate(int x)
{
    for (int i=1; i<=x; i++)
    {
        printf("%d", i);
        if(i==x)
        {
            break;
        }
        printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    calculate(n);
    return 0;
}