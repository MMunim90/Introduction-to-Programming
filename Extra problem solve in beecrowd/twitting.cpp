#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    int len = str.size();

    if(len <= 140)
    {
        cout << "TWEET" << endl;
    }
    else if(len > 140)
    {
        cout << "MUTE" << endl;
    }
    return 0;
}