#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    int flag = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (2 * i == n / 2)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}