#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int diff = (a * b) - (c * d);
    printf("Difference = %d", diff);

    return 0;
}