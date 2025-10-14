#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a == 'z')
    {
        printf("%c", a - 25);
    }
    else
    {
        a = a + 1;
        printf("%c", a);
    }
    return 0;
}