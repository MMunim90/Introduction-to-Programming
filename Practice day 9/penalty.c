#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);

    long long int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    long long int max_sum = 0;
    long long int sum = 0;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            
            sum += arr[i][j];
            
        }
        
        if(sum > max_sum)
        {
            max_sum = sum;
        }
    }
    printf("%lld", max_sum);
    return 0;
}