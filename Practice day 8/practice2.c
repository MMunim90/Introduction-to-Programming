#include<stdio.h>
#include<string.h>

char my_len(char a[])
{
    int count = 0;
    for(int i=0; a[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char a[101];
    scanf("%s", a);
    int count = my_len(a);
    printf("%d", count);
    return 0;
}