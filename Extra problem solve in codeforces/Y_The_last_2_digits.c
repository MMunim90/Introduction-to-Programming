#include <stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a && b && c && d >= 2)
    {
        long long int multiply = a * b * c * d;

        int last2_digit = multiply % 100;

        printf("%d", last2_digit);
    }

    return 0;
}