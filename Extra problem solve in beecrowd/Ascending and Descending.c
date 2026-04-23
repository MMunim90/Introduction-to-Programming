#include <stdio.h>

int main()
{

    int n=2, i, first_number, second_number;

    for(i=0; i<n; )
    {
        scanf("%d %d", &first_number, &second_number);

        if(first_number > second_number)
        {
            printf("Decrescente\n");
        }
        else if(first_number < second_number)
        {
            printf("Crescente\n");
        }
        else
        {
            break;
        }
    }
    i++;

    return 0;
}
