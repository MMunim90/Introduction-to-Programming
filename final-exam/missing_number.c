#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        long long int multiply, a, b, c;

        scanf("%lld %lld %lld %lld", &multiply, &a, &b, &c);

        long long int multiply_of_three = a * b * c;

        if(multiply % multiply_of_three != 0)
        {
            printf("-1\n");
        }
        else if(multiply % multiply_of_three == 0)
        {
            long long int missing_number = multiply / multiply_of_three;
            printf("%lld\n", missing_number);
        }

    }
    return 0;
}