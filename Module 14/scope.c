#include<stdio.h>

int y = 30;  // global variable

int sum()
{
    int x = 20;
    printf("sum -> %d\n", x);
    printf("y -> %d\n", y);
}

int main()
{
    int x = 10;
    printf("main -> %d\n", x);
    printf("y -> %d\n", y);
    sum();
    return 0;
}