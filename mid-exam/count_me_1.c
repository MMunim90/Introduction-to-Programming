#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int count_2 = 0;
    int count_3 = 0;

    for(int i=0; i<n; i++)
    {
        int num;
        scanf("%d", &num);

        if(num % 2 == 0 && num % 3 == 0)
        {
            count_2++;
        }
        else if (num % 2 == 0)
        {
            count_2++;
        }
        else if (num % 3 == 0)
        {
            count_3++;
        }
    }

    printf("%d %d", count_2, count_3);
    return 0;
}