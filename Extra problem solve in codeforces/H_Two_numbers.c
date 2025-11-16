#include<stdio.h>
#include<math.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    float divide = floor(a / b);
    float divide2 = ceil(a / b);
    float divide3 = round(a / b);

    printf("floor %.f / %.f = %.f\n", a, b, divide);
    printf("ceil %.f / %.f = %.f\n", a, b, divide2);
    printf("round %.f / %.f = %.f\n", a, b, divide3);

    return 0;
}