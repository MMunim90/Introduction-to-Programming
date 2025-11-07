#include<stdio.h>
#include<string.h>

// char my_len(char a)
// {
//     printf("%c", a);
// }

int main()
{
    char a;
    scanf("%s", a);
    int len = strlen(a);
    printf("%d", len);
    // my_len(a);

    // int len = my_len(a);
    // printf("%d", len);
    return 0;
}