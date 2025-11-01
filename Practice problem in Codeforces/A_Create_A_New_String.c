#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[1001];

    scanf("%s", a);
    scanf("%s", b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    printf("%d %d\n", len_a, len_b);
    printf("%s %s\n", a,b);
    return 0;
}