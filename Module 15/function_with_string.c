#include<stdio.h>
#include<string.h>

void func(char a[])
{
    printf("%s\n", a);
    printf("%d\n", strlen(a));
}

int main()
{
    char a[10];
    scanf("%s", a);
    func(a);
    return 0;
}