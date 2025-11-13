#include <stdio.h>
#include <stdbool.h>

void palindrome(int arr[], int brr[], int start, int end, bool is_palindrome)
{

    if (start > end)
    {
        printf("YES");
        return;
    }
    
    if (arr[start] != brr[end])
    {
        is_palindrome = false;
        printf("NO");
        return;
    }

    palindrome(arr, brr, start+1, end-1, is_palindrome);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        brr[i] = arr[i];
    }

    int start = 0, end = n - 1;
    bool is_palindrome = true;

    palindrome(arr, brr, start, end, is_palindrome);

    return 0;
}