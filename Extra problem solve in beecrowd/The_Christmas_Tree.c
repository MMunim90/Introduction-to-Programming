#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int h, d, g;

        scanf("%d %d %d", &h, &d, &g);


        if(h >= 200 && h <= 300)
        {
            if(d >= 50 && g >= 150)
            {
                printf("Sim\n");
            }
            else
            {
                printf("Nao\n");
            }
        }
        else
        {
            printf("Nao\n");
        }
    }
    return 0;
}