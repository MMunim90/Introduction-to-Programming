#include<stdio.h>
int main()
{
    char s[50];
    // scanf("%s", &s);
    // gets(s);
    fgets(s,25,stdin);
    printf("%s", s);
    return 0;
}