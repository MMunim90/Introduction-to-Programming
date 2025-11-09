#include<stdio.h>

void recursive(int n)
{
    if(n == 10)  // end condition
    {
        return;
    }
    printf("%d\n", n);
    recursive(n+1);  // increment / decrement
}

int main()
{
    int n;
    scanf("%d", &n);
    recursive(n); //initialization / starting
    return 0;
}


// for ( starting ; end condition ; increment / decrement)