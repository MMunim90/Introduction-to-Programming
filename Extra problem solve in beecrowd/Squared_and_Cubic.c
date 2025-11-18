#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);

    
    int x = 1;
    
    for(int i=1; i<=n; i++)
    {
        int cubic = pow(x,3);
        for(int j=x; j<=cubic; j++)
        {
            if(j % x == 0)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
        x++;
    }
    return 0;
}