#include<stdio.h>
#include<math.h>

void func(long long int n)
{
    long long int ans = log2(n);
    printf("%lld", ans);
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    
    func(n);
    return 0;
}