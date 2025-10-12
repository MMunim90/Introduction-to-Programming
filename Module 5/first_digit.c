#include<stdio.h>
int main()
{
    int n, div;
    scanf("%d", &n);
    div = n/1000;

    if(div%2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}