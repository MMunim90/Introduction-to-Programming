#include<stdio.h>
#include<math.h>

void func(long long int n, long long int cnt)
{
    if(n == 1)
    {
        printf("%lld", cnt);
        return;
    }

    func(n/2, cnt+1);
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int cnt = 0;
    
    func(n, cnt);
    return 0;
}