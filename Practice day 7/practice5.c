// return + no parameter

#include<stdio.h>

char capital_to_small()
{
    char n;
    scanf("%c", &n);

    char swap = n + 32;
    return swap;
}

int main()
{
    char swap = capital_to_small();
    printf("%c", swap);
    return 0;
}