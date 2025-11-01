#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char a[55], b[55];

        scanf("%s %s", a, b);

        int a_len = strlen(a);
        int b_len = strlen(b);

        int min_len;

        if (a_len > b_len)
        {
            min_len = b_len;
        }
        else
        {
            min_len = a_len;
        }

        // for common part
        for (int i = 0; i < min_len; i++)
        {
            printf("%c%c", a[i], b[i]);
        }

        // if a string is big
        int rem_a = a_len - min_len;
        if (rem_a > 0)
        {
            for (int j = min_len; j < a_len; j++)
            {
                printf("%c", a[j]);
            }
        }

        // if b string is big
        int rem_b = b_len - min_len;
        if (rem_b > 0)
        {
            for (int j = min_len; j < b_len; j++)
            {
                printf("%c", b[j]);
            }
        }
        printf("\n");
    }
    return 0;
}