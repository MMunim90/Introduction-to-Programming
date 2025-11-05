#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    // printf("Address of 0th index of a array: %p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);


    // printf("Name of the array: %p\n", a);
    // printf("after dereferencing of the array: %d\n", *a);

    *a = 100;
    *(a + 2) = 99;

    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}