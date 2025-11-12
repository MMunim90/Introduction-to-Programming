#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_scalar = true;

    if(r == c)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i == j)
                {
                    if(arr[i][j] != 0)
                    {
                        is_scalar = false;
                        printf("This is not a scalar matrix");
                    }
                }
            }
        }

        if(is_scalar)
        {
            printf("This is a scaler matrix");
        }
    }
    else
    {
        printf("This is not a scalar matrix");
    }
    return 0;
}