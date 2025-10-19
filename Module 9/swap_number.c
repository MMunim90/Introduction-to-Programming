#include<stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);

    // temp = a;
    // a = b;
    // b = temp;

    //without third variable

    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d %d", a, b);
    return 0;
}