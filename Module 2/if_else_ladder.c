#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("Eat Burger\n");
    }
    else if(tk >= 50){
        printf("Eat Fuchka\n");
    }
    else if(tk >= 20){
        printf("Eat Chips\n");
    }
    else{
        printf("Don't Eat Anything\n");
    }

    return 0;
}