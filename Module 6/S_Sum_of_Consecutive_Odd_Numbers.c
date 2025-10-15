
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        int x, b, sum = 0;
        int start, end;
        scanf("%d %d",&x ,&b);
        if (x < b)
        {
            start=x;
            end = b;
        }else
        {
            start = b;
            end = x;
        }
        
        for (int i = start+1; i < end ; i++)
        {
            if (i % 2 != 0)
            {
                
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}