#include<stdio.h>
#include<limits.h>
int main()
{
    int n,x,max=INT_MIN; // if input value is less than zero then we need to use #include<limits.h> header file and max = INT_MIN
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x > max)
        {
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}