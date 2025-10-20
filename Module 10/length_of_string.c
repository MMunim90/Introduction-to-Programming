#include<stdio.h>
int main()
{
    char string[101];
    scanf("%s", &string);
    // printf("%s", string);
    
    int count = 0;
    for(int i=0; string[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);
    return 0;
}









// #include<stdio.h>
// int main()
// {
//     char string[100];
//     scanf("%s", &string);

//     int count = 0;
//     for(int i=0; string[i] != '\0'; i++)
//     {
//         count++;
//     }

//     printf("%d", count);
//     return 0;
// }