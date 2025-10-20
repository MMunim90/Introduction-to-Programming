#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000001];
    // scanf("%d", string);

    fgets(string, 1000001, stdin);

    for(int i=0; string[i] != '\\'; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}