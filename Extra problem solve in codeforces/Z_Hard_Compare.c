#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, c;
    scanf("%lld %lld", &a, &c);

    long long int b, d;
    scanf("%lld %lld", &b, &d);

    long long int res1 = pow(a, b);
    long long int res2 = pow(c, d);

    printf("%lld %lld", res1, res2);

    // if(res1 > res2)
    // {
    //     printf("YES");
    // }
    // else if(res1 < res2)
    // {
    //     printf("NO");
    // }
    // else if(res1 == res2)
    // {
    //     printf("NO");
    // }
    return 0;
}