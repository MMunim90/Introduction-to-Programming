#include<stdio.h>

int cnt_cap_small_digit(char str[], int* cnt_cap, int* cnt_sam, int* cnt_digit) 
{
    // int cap = 0, sam = 0, digit = 0;

    for(int i=0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z')
        {
             *cnt_sam = *cnt_sam + 1;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
             *cnt_cap = *cnt_cap + 1;
        }
        else if(ch >= '0' && ch <= '9')
        {
             *cnt_digit = *cnt_digit + 1;
        }
    }

}

int main()
{
    char str[100005];
    scanf("%s", str);

    int cnt_cap = 0, cnt_sam = 0, cnt_digit = 0;

    cnt_cap_small_digit(str, &cnt_cap, &cnt_sam, &cnt_digit);

    printf("%d %d %d\n", cnt_sam, cnt_digit, cnt_cap );

    return 0;
}