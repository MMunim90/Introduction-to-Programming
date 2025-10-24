#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int val = strcmp(a, b); // this function is comparing this two string. if the first string is smaller then the function return (-) any negative value, if the first and second string is equal then the function return 0. and if the second string is smaller then the function return (+) positive value. 

    if(val < 0)
    {
        printf("A is smaller");
    }
    else if(val == 0)
    {
        printf("Equal");
    }
    else if (val > 0)
    {
        printf("B is smaller");
    }
    

    return 0;
}