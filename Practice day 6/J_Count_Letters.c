#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000001];
    scanf("%s", a);

    int length = strlen(a);

    int fre[27] = {0};

    for (int i = 0; i < length; i++)
    {
        int idx = a[i] - 'a';
        fre[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }
    return 0;
}