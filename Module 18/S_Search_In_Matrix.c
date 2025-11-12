#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);

    if(r < 2 || r > 100 || c < 2 || c > 100)
    {
        return 0;
    }

    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    bool is_exists = true;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j] == x)
            {
                is_exists = false;
                printf("will not take number\n");
                return 0;
            }
        }
    }

    if(is_exists)
    {
        printf("will take number\n");
    }
    return 0;
}