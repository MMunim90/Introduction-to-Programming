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

    bool is_unit = true;

    if(r == c)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i == j)
                {
                    if(arr[i][j] != 1)
                    {
                        is_unit = false;
                        printf("This is not a unit matrix");
                        return;
                    }
                }
            }
        }

        if(is_unit)
        {
            printf("This is a unit matrix");
        }
    }
    else
    {
        printf("This is not a unit matrix");
    }
    return 0;
}