#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int new_days = (m1 * d) / (m1 + m2);

        int remain_days = d - new_days;

        printf("%d\n", remain_days);
    }
    return 0;
}