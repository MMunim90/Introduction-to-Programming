#include<stdio.h>
int main()
{
    int A;
    long long int B;
    double C;
    char D;

    scanf("%d %lld %lf %c", &A, &B, &C, &D);
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2lf\n", C);
    printf("%c\n", D);

    return 0;
}