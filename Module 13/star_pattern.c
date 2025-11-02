// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++) // for printing line
//     {
//         for(int j=i; j>=1; j--)  // for printing star
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// another way to printing star
#include<stdio.h>
int main()
{
    int n, star=1;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}