// compare two string with  strcmp function

#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int compare = strcmp(a,b);

    if(compare == 1)
    {
        printf("%s", b);
    }
    else if(compare == 0)
    {
        printf("%s", a);
    }
    else if(compare == -1)
    {
        printf("%s", a);
    }
    
    return 0;
}