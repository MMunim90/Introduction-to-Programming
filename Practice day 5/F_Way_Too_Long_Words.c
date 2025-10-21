#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char string[101];
        scanf("%s", string);
        int size = strlen(string);
        // printf("%d\n", size);
        
            if (size > 10)
            {
                printf("%c", string[0]);
                printf("%d", size - 2);
                printf("%c\n", string[size-1]);
            }
            else
            {
                printf("%s\n", string);
            }
        
    }
    return 0;
}