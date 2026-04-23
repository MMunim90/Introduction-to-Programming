#include <stdio.h>
#include<stdlib.h>

int main() {

    int start, end, sum, i;

    while(1)
    {
        scanf("%d %d", &start, &end);

        if(start<=0 || end<=0)
        {
            exit(0);
        }

        if(start>end)
        {
            i = start;
            start = end;
            end = i;
        }
        sum = 0;
        for(i=start; i<=end; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}
