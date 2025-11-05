#include<stdio.h>

void fun(int x)
{
    x = 20;
    printf("Address of fun function x : %p\n", &x);
}
int main()
{
    int x = 10;
    fun(x);
    // printf("%d\n", x);
    printf("Address of main function x : %p\n", &x);
    return 0;
}