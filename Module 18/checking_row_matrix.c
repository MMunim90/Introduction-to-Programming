// we can check row, column and square matrix using this program.

#include<stdio.h>
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

    //for checking row matrix
    // if(r==1)
    // {
    //     printf("This is a row matrix");
    // }
    // else
    // {
    //     printf("This is not a row matrix");
    // }


    // for checking column matrix
    // if(c==1)
    // {
    //     printf("This is a column matrix");
    // }
    // else
    // {
    //     printf("This is not a column matrix");
    // }

    //for checking the square matrix
    if(r==c)
    {
        printf("This is a square matrix");
    }
    else
    {
        printf("This is not a square matrix");
    }
    return 0;
}