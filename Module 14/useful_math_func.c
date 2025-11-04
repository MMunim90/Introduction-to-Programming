#include <stdio.h>
#include <math.h>
int main()
{
    int res = ceil(3.3);
    printf("%d\n", res);

    int res2 = floor(3.3);
    printf("%d\n", res2);

    int res3 = round(3.4);
    printf("%d\n", res3);

    int res4 = sqrt(36);
    printf("%d\n", res4);
    
    double res5 = sqrt(20);
    printf("%lf\n", res5);

    int res6 = pow(3, 2);
    printf("%d\n", res6);

    int res7 = abs(-36);
    printf("%d\n", res7);

    return 0;
}