#include<stdio.h>

void pyramid(int n, int star, int space)
{
    if(n == 0)
    {
        return;
    }

    for(int j=0; j<space; j++)
    {
        printf(" ");
    }
    for(int j=0; j<star; j++)
    {
        printf("*");
    }

    printf("\n");
    pyramid(n-1, star+=2, space-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n-1;

    pyramid(n, star, space);
    return 0;
}