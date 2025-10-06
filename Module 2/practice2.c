#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if(a > 0){
        printf("This Number is Positive");
    }
    else if(a == 0){
        printf("This Number is Zero");
    }
    else{
        printf("This Number is Negative");
    }

    return 0;
}