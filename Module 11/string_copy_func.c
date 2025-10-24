#include<stdio.h>
#include<string.h>
int main()
{
    int ori[101], cpy[101];
    scanf("%s %s", &cpy, &ori );

    strcpy(cpy, ori); //this function copy second and store the value to first;

    printf("%s %s", cpy, ori );
    return 0;
}