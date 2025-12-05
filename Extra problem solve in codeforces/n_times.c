#include<stdio.h>

void ntime()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char ch;
        scanf("%d %c", &n, &ch);

        for(int i=0; i<n; i++)
        {
            printf("%c ", ch);
        }

        printf("\n");
    }
}

int main()
{
   
    ntime();
    return 0;
}