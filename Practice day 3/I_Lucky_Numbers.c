#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int first_num = a/10;
    int second_num = a%10;

    if (second_num == 0)
    {
        printf("YES");
    }
    
    else if(first_num % second_num == 0 || second_num % first_num == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}