#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf("%d %d", &a, &b);
    scanf("%c", &s);

    if(s == "+")
    {
        int sum = a + b;
        printf("%d", sum);
    }
    return 0;
}