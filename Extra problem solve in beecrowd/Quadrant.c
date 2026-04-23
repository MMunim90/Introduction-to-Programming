#include <stdio.h>

int main() {

    int i, n=2, x, y;

    for(i=0; i<n; )
    {
        scanf("%d %d", &x, &y);

        if(x>0 && y>0)
        {
            printf("primeiro\n");
        }
        else if(x<0 && y>0)
        {
            printf("segundo\n");
        }
        else if(x<0 && y<0)
        {
            printf("terceiro\n");
        }
        else if(x>0 && y<0)
        {
            printf("quarto\n");
        }
        else
        {
            break;
        }
    }
    i++;

    return 0;
}
