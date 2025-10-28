#include<stdio.h>
int main()
{
    int bill;
    scanf("%d", &bill);


    if(bill % 3 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}