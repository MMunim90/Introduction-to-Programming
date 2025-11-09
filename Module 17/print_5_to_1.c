// #include<stdio.h>

// void hello(int i)
// {
//     if(i == 0)
//     {
//         return;
//     }

//     printf("%d\n", i);
//     hello(i-1);
// }

// int main()
// {
//     hello(5);
//     return 0;
// }


// another recursive way

#include<stdio.h>

void hello(int i)
{
    if(i == 6)
    {
        return;
    }

    hello(i+1);
    printf("%d\n", i);
}

int main()
{
    hello(1);
    return 0;
}