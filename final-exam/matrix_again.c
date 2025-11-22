#include <stdio.h>
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

    int last_row = n - 1;
    int last_column = m - 1;

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[last_row][i]);
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i][last_column]);
    }
    return 0;
}