#include<stdio.h>

void swap(int x, int b)
{
    x = x + b;
    b = x - b;
    x = x - b;

    printf("%d %d\n", x, b);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    swap(x, y);
    return 0;
}