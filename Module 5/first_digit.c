#include<stdio.h>
int main()
{
    // input a number between 999>n<=9999
    int n, first_number;
    scanf("%d", &n);
    first_number = n/1000;

    if(first_number%2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}