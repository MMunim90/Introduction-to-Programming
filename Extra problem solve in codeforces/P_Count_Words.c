#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000005];
    fgets(s, 1000005, stdin);

    int len = strlen(s);
    int count = 1;

    for (int i = 1; i <= len; i++)
    {
        if (s[i] != '!' || s[i] != '.' || s[i] != '?' || s[i] != ',')
        {
            if (s[i] == ' ')
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}