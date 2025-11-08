#include <stdio.h>
#include <string.h>
int main()
{
    char o[1001];

    scanf("%s", o);

    int len = strlen(o);

    int start = 0, end = len - 1;

    int flag = 0;

    while (start < end)
    {
        if (o[start] != o[end])
        {
            flag = 1;
            break;
        }
        start++;
        end--;
    }

    if (flag)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}