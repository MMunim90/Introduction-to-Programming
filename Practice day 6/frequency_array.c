#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            count_0++;
        }
       else if(arr[i] == 1)
        {
            count_1++;
        }
        else if(arr[i] == 2)
        {
            count_2++;
        }
        else if(arr[i] == 3)
        {
            count_3++;
        }
        else if(arr[i] == 4)
        {
            count_4++;
        }
        else if(arr[i] == 5)
        {
            count_5++;
        }
    }

    printf("0 -> %d\n", count_0);
    printf("1 -> %d\n", count_1);
    printf("2 -> %d\n", count_2);
    printf("3 -> %d\n", count_3);
    printf("4 -> %d\n", count_4);
    printf("5 -> %d\n", count_5);
    return 0;
}