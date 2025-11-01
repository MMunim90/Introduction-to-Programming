#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++) // for printing line
    {
        for(int j=i; j>=1; j--)  // for printing star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}