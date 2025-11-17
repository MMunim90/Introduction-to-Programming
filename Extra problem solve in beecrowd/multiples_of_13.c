#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    int xx = abs(x);
    int yy = abs(y);

    int sum=0;

    if(xx > yy)
    {
        int temp = xx;
        xx = yy;
        yy = temp;
    }

    for(int i=xx; i<=yy; i++)
    {
        if(i % 13 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}