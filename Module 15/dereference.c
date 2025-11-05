#include<stdio.h>
int main()
{
    int x = 1000;
    printf("%d\n", x);

    int* ptr;
    ptr = &x;

    printf("%d\n", *ptr);
    *ptr = 200;
    printf("%d\n", x);
    return 0;
}