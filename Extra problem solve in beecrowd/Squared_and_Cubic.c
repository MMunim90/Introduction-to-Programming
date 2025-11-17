#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);

    
    int x = 1;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=x; j<pow(x, 3); j*=x)
        {
            printf("%d ", j);
        }
        printf("\n");
        x++;
    }
    return 0;
}