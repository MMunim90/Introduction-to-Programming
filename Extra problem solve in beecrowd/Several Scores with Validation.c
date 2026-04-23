#include <stdio.h>

int main()
{
    double a, b, c;

    for(int i=1; i<=2; i++)
    {
        if((a>=0 && a<=10) && (b>=0 && b<=10))
        {
            scanf("%lf %lf", &a, &b);
        }
        else
        {
            printf("nota invalida");
        }
    }

    c = (a + b) / 2;
            printf("media = %.2lf\n", c);
            printf("novo calculo (1-sim 2-nao)");

    return 0;
}
