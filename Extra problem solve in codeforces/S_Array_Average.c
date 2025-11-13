#include<stdio.h>

void arr_avg(int n, double arr[], double sum, double avg, int i)
{
    if(i==0)
    {
        avg = sum / n;
        printf("%.6lf", avg);
        return;
    }

    sum += arr[i];
    arr_avg(n, arr, sum, avg, i-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    double arr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%lf", &arr[i]);
    }

    double sum = 0;
    double avg = 0;
    int idx = n;

    arr_avg(n, arr, sum, avg, idx);
    return 0;
}