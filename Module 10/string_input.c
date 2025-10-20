#include<stdio.h>
int main()
{
    char string[10];
    printf("%d\n", string[5]);
    scanf("%s\n", &string);
    printf("%s\n", string);
    printf("%d\n", string[5]);

    return 0;
}