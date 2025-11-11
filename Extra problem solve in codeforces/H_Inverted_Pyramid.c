#include<stdio.h>

void inv_pyramid(int n, int star, int space)
{
    if(n == 0)
    {
        return;
    }

    for(int i=0; i<space; i++)
    {
        printf(" ");
    }
    for(int i=0; i<star; i++)
    {
        printf("*");
    }

    printf("\n");

    inv_pyramid(n-1, star-2, space+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int star = (n * 2) - 1;
    int space = 0;
    inv_pyramid(n, star, space);
    return 0;
}