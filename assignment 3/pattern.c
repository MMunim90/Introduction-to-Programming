#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1;
    int gap = n-1;
    int hash2 = (n * 2) - 1;
    int gap2 = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= gap; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
        gap--;
        hash += 2;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= gap2; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash2; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        gap2++;
        hash2 -=2;
    }

    return 0;
}