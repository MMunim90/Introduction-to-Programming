// variable -> pass by value
// array -> pass by reference

// #include<stdio.h>

// void func(int a[])
// {
//     a[2] = 200;
//     // printf("Func function: %p\n", a);
// }

// int main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     func(a);

//     // printf("main function: %p\n", a);

//     for(int i=0; i<5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }




#include<stdio.h>

void func(int a[], int n)
{
    a[2] = 200;
    // printf("Func function: %p\n", a);

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    func(a,n);

    // printf("main function: %p\n", a);
    return 0;
}