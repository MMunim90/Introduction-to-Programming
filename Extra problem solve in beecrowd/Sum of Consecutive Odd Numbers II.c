#include<stdio.h>
int main()
{
    int start, end, test_case, sum, i;

    scanf("%d", &test_case);

    while(test_case>0)
    {
        scanf("%d %d", &start, &end);

        if(start>end)
        {
            i = start;
            start = end;
            end = i;
        }

        sum = 0;

        for(i=start+1; i<end; i++)
        {
            if(i%2 == 1)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
        test_case--;
    }
    return 0;
}
