#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    strcat(b,a); //this function copy the second string and store it to the first.

    printf("%s %s", a, b);
    
    return 0;
}