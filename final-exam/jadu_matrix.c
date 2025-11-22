#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_jadu = true;

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (i == j || (i + j) == n - 1)
                {

                    if (arr[i][j] != 1)
                    {
                        is_jadu = false;

                        break;
                    }
                }
                else
                {

                    if (arr[i][j] != 0)
                    {
                        is_jadu = false;

                        break;
                    }
                }
            }
        }
        if (is_jadu)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}