#include<stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    
    long long int multiply = a * b * c * d;
    if(multiply > 100000000000000000)
    {
        printf("00");
        return 0;
    }
    
    long long int last2_digit = multiply % 100;

    printf("%lld", last2_digit);

    return 0;
}