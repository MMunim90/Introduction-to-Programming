#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if(taka >= 1000)
    {
        printf("Three Kacchi");
        return 0;
    }
    else if(taka >= 500 && taka < 1000)
    {
        printf("One Large Pizza");
        return 0;
    }
    else if(taka >= 250 && taka < 500)
    {
        printf("Three Small Burger");
        return 0;
    }
    else if(taka >= 100 && taka < 250)
    {
        printf("Three Fuchka");
        return 0;
    }
    else if(taka >= 0 && taka < 100)
    {
        printf("Nothing");
        return 0;
    }
    return 0;
}