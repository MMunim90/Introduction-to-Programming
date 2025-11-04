// no return + parameter

#include<stdio.h>

void small_to_capital(char a)
{
    char swap = a - 32;
    printf("%c", swap);
}

int main()
{
    char x;
    scanf("%c", &x);
    small_to_capital(x);
    
    return 0;
}