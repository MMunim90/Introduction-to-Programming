#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    scanf("%s", &string);

    int size = strlen(string);
    printf("%d", size);
    return 0;
} 