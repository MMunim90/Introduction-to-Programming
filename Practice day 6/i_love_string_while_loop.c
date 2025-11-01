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

        // for common part
        int i=0, j=0;
        while( i < a_len && j < b_len )
        {
            printf("%c%c", a[i], b[i]);
            i++;
            j++;
        }

        // if a string is big
        while( i < a_len )
        {
            printf("%c", a[i]);
            i++;
        }

        // if b string is big
        while( j < b_len )
        {
            printf("%c", b[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}