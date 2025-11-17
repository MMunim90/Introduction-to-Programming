#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int num = 4 * n;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j % 4 == 0)
            {
                printf("PUM\n");
                continue;
            }
            printf("%d ", j);
        }
    }
    return 0;
}