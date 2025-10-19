#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index;
    scanf("%d", &index);
    for(int i=index+1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// another way

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int index;
//     scanf("%d", &index);
//     for(int i=index; i<n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }

//     for(int i=0; i<n-1; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }