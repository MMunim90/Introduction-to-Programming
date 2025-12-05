#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int idx = str.find("?");

    str.erase(0, idx + 1);

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '&')
        {
            cout << endl;
            continue;
        }
        if(str[i] == '=')
        {
            cout << ": ";
            continue;
        }
        cout << str[i];
    }
    return 0;
}