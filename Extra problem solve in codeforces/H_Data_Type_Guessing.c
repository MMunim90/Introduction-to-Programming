#include<stdio.h>
#include<limits.h>
int main()
{
    long long int n, k, a, result;

    scanf("%lld %lld %lld", &n, &k, &a);

    result = (n * k);

    int max = INT_MAX;
    int min = INT_MIN;

    // printf("%d %d", max, min);

    if(result >= min && result <= max)
    {
        if(result % a == 0)
        {
            printf("int");
        }
        else
        {
            printf("double");
        }
    }
    else if(result > max)
    {
        if(result % a == 0 && result % a > max)
        {
            printf("long long");
        }
        else if(result % a == 0 && result % a <= max)
        {
            printf("int");
        }
        else
        {
            printf("double");
        }
    }
    else if(result % a != 0)
    {
        printf("double");
    }
    return 0;
}