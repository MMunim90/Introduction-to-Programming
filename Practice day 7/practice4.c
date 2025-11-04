#include<stdio.h>

char small_to_capital(char a)
{
    char swap = a - 32;
    return swap;
}

int main()
{
    char x;
    scanf("%c", &x);
    char result = small_to_capital(x);
    printf("%c", result);
    return 0;
}