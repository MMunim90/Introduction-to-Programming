#include <stdio.h>
#include <string.h>
int main(void)
{
    // int n;
    // scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     char line[101];
    //     fgets(line, 101, stdin);
    //     // printf("%d %d\n", sizeof(line), strlen(line));
    //     printf("%s", line);
    // }

    char line[101];
    fgets(line, 101, stdin);
    // printf("%s", line);

    int size = 0;
    int len = 0;
    for(int i=0; line[i] != '\0'; i++)
    {
        size++;
    }
    for(int i=0; line[i] != '\0'; i++)
    {
        len++;
        if(line[i] == "\\" && line[i+1] == "0")
        {
            break;
        }
    }
    printf("%d %d\n", size, len);
    return 0;
}
