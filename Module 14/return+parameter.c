#include<stdio.h>

//return_type function_name(parameters)
// {

//     return
// }

int sum(int num1, int num2)
{
    // printf("%d %d", num1, num2);
    int res = num1 + num2;
    return res;
}

int sub(int num1, int num2);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = sum(a,b);
    int result2 = sum(100,233);
    int result3 = sum(766,233);
    int result4 = sub(666,333);
    printf("%d %d %d %d", result, result2, result3, result4);
    return 0;
}

int sub(int num1, int num2)
{
    // printf("%d %d", num1, num2);
    int res = num1 - num2;
    return res;
}