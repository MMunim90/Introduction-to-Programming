#include <stdio.h>
#include <math.h>
int main()
{
    int b, g;
    scanf("%d %d", &b, &g);

    int missing_balls = 0;

    if (g / 2 == b)
    {
        printf("Amelia tem todas bolinhas!\n");
    }

    else if (g / 2 != b)
    {
        missing_balls = (g - (b * 2)) / 2;
        printf("Faltam %d bolinha(s)\n", missing_balls);
    }

    return 0;
}