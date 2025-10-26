#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        char a[10001];
        scanf("%s", a);
        int length = strlen(a);

        int count_cap = 0;
        int count_sam = 0;
        int count_num = 0;

        for(int j=0; j<length; j++)
        {
            if(a[j] >= 'A' && a[j] <= 'Z')
            {
                count_cap++;
            }
            else if(a[j] >= 'a' && a[j] <= 'z')
            {
                count_sam++;
            }
            else if(a[j] >= '0' && a[j] <= '9')
            {
                count_num++;
            }
        }

        printf("%d %d %d\n", count_cap, count_sam, count_num);
    }
    return 0;
}