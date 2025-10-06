#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000)
    {
        printf("Going to cox\n");
        if(tk >= 10000)
        {
            printf("Going to saint Martin\n");
        }
        else
        {
            printf("Go back to home\n");
        }
    }
    else
    {
        printf("Don't go to anywhere\n");
    }

    return 0;
}