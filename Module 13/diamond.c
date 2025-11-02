// diamond shape pattern

// #include <stdio.h>
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int space = 0;
//     int space2 = n-1;
//     int star = (n * 2) - 1;
//     int star2 = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space2; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star2; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star2+=2;
//         space2--;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star -= 2;
//         space++;
//     }

//     return 0;
// }

// reverse diamond

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int space = 0;
    int space2 = n - 1;
    int star = (n * 2) - 1;
    int star2 = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        printf("\n");
        star2 += 2;
        space2--;
    }

    return 0;
}