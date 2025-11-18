#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[21];
    while(cin >> s)
    {
        int count = 0;
        for(int i=0; s[i] != '\0'; i++)
        {
            count++;
        }

        if(count >= 10)
        {
            cout << "palavrao" << endl;
        }
        else
        {
            cout << "palavrinha" << endl;
        }
    }
    return 0;
}