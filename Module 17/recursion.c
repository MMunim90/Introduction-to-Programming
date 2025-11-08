#include<stdio.h>

void hello()
{
    printf("hello\n");
    // hello(); // this is a recursive function . don't run it after uncommenting hello();. It's a infinite loop may cause stack overflow.
}

int main()
{
    printf("hi\n");
    hello();
    return 0;
}