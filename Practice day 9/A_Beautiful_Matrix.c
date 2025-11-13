#include<stdio.h>
#include<math.h>

int main()
{
    int arr[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int row = 0;
    int column = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] == 1)
            {
                row = abs(2 - i);
                column = abs(2 - j);
            }
        }
    }

    int moves = row + column;
    printf("%d ", moves);
    return 0;
}