#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char str[n];

    scanf("%s", str);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += str[i] - '0';
    }

    printf("%d", count);

    return 0;
}