#include <stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    if (arr[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is Not a Primary Diagonal Matrix");
                    }
                }
            }
        }
        if (is_diagonal)
        {
            printf("This is a Primary Diagonal Matrix");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix\n");
    }
    return 0;
}