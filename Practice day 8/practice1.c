#include<stdio.h>
#include<math.h>

int my_abs(int x)
{
    int res = abs(x);
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = my_abs(n);
    printf("%d", result);
    return 0;
}