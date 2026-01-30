#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2;
    getline(cin, s);
    getline(cin, s1);
    getline(cin, s2);

    cout << s << s1 << s2 << endl;
    cout << s1 << s2 << s << endl;
    cout << s2 << s << s1 << endl;

    if (s.size() > 10)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << s[i];
        }
    }
    else
    {
        cout << s;
    }
    if (s1.size() > 10)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << s1[i];
        }
    }
    else
    {
        cout << s1;
    }
    if (s2.size() > 10)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << s2[i];
        }
    }
    else
    {
        cout << s2;
    }
    cout << endl;
    return 0;
}