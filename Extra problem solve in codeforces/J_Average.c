#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    double arr[n];
    double sum = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    double avg = sum / n;
    printf("%.7lf", avg);
    return 0;
}