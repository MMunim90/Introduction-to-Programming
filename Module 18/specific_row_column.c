#include<stdio.h>
int main()
{
    int r,c;

    scanf("%d %d", &r, &c);
    int a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // to printing specific row
    // int row;
    // scanf("%d", &row);

    // for(int i=0; i<c; i++)
    // {
    //     printf("%d ", a[row][i]);
    // }


    // to printing specific column
    int column;
    scanf("%d", &column);

    for(int i=0; i<r; i++)
    {
        printf("%d ", a[i][column]);
    }
    return 0;
}