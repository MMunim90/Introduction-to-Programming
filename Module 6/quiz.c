// #include<stdio.h>
// int main()
// {
//     int i=3;
//     while (i<=5)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         i++;
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=-3;
//     while (i<0)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("*");
//         }
//         i--; // infinite loop
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=-4; i>=0; i++)
//     {
//         for(int j=5; j<2; j++)
//         {
//             printf("hi ");
//         }
//     }
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    for(int i=0; i<=10; i++)
    {
        if (i>2)
        {
            continue;
        }
        
        printf("hi ");
    }
    
    return 0;
}