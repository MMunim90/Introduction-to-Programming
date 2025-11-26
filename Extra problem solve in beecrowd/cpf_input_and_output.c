#include <stdio.h>
int main()
{
    char s[20];

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.' || s[i] == '-')
        {
            printf("\n");
            continue;
        }
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}