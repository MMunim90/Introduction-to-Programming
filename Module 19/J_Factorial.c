#include<stdio.h>

void factorial(long long int arr[], int n, long long int fact)
{
    if(n==0)
    {
        printf("%d\n", fact);
        return;
    }
    
    fact = fact * n;
    factorial(arr, n-1, fact);

}

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld", arr[i]);
    }

    long long int fact = 1;

    factorial(arr, n, fact);

    return 0;
}