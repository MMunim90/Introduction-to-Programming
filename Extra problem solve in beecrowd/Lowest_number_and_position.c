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

    int sm_num = arr[0];
    int pos = 0;

    for(int i=0; i<n; i++)
    {
        if(sm_num > arr[i])
        {
            sm_num  = arr[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", sm_num);
    printf("Posicao: %d\n", pos);
    
    return 0;
}