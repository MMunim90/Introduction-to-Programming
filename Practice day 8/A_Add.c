#include<stdio.h>

int sum(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    int result = sum(x, y);

    printf("%d\n", result);
    return 0;
}