#include <stdio.h>
#include <string.h>
int main()
{
    char string[1001];
    scanf("%s", string);

    int size = strlen(string);
    // printf("%c", string[0]);
    // printf("%c", string[size-1]);

    int i = 1;
    int j = size;
    // printf("%d %d", i, j);
    // printf("%c %c", string[i], string[j]);

    while (i < j)
    {
        string[i] == string[j];
        i++;
        j--;
        if(string[i] == string[j])
        {
            printf("YES");
            return 0;
        }
        else
        {
            printf("NO");
            return 0;
        }

    }

    return 0;
}