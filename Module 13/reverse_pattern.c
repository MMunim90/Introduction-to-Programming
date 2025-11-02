// #include<stdio.h>
// int main()
// {
//     int n, star=1;
//     scanf("%d", &n);

//     for(int i=0; i<n; i++)
//     {
//         for(int j=n; j>=star; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star++;
//     }
//     return 0;
// }


// another way to print reverse pattern
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n;

    for(int i=0; i<n; i++) // for printing line
    {
        for(int j=1; j<=star; j++)  // for printing star
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}