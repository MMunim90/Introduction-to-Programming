#include<stdio.h>
#include<string.h>
int main()
{
    char string[100001];
    scanf("%s", string);

    int length = strlen(string);

    for(int i=0; i<length; i++)
    {
        
        if(string[i] == ',')
        {
            printf(" ");
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = 'a' + (string[i] - 'A');
            printf("%c", string[i]);
            
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = 'A' + (string[i] - 'a');
            printf("%c", string[i]);
        }
        
        

    }
    
    return 0;
}