#include<stdio.h>

void fun(int* x)  // receive the x variable address with a pointer variable
{
    *x = 20;  // dereferencing and changing the value on x variable address
    printf("value of fun function x : %p\n", x);
    printf("Address of fun function x : %p\n", &x);
}
int main()
{
    int x = 10;
    fun(&x);  // send the address of x variable
    printf("%d\n", x);
    printf("Address of main function x : %p\n", &x);
    return 0;
}