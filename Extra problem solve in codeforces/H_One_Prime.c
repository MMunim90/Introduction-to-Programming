#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n == 1)
    {
        printf("NO");
        return 0;
    }

    int not_prime = 0;

    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
        {
            not_prime = 1;
        }
    }

    if(not_prime)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0; 
}