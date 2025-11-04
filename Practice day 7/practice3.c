#include<stdio.h>

int char_to_ascii(char a)
{
    int res = 0;

    if(a >= 'a' && a <= 'z')
    {
        res = a;
    }
    else if(a >= 'A' && a <= 'z')
    {
        res = a;
    }
    else if(a >= '0' && a <= '9')
    {
        res = a;
    }

    return res;
}

int main()
{
    char x;
    scanf("%c", &x);
    int val = char_to_ascii(x);
    printf("%d", val);
    return 0;
}