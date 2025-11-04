#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int org[n];
    int copy[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &org[i]);
        copy[i] = org[i];
    }

    int left = 0, right = n - 1;

    while (left < right)
    {
        copy[left] = copy[left] + copy[right];
        copy[right] = copy[left] - copy[right];
        copy[left] = copy[left] - copy[right];

        left++;
        right--;
    }

    int flag = 1;
    for(int i=0; i<n; i++)
    {
        if(copy[i] != org[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}