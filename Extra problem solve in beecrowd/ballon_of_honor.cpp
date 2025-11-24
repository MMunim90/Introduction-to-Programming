#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;

    int pos;

    if(a >= 'A' && a <= 'Z')
    {
        pos = a - 64;
    }

    cout << pos << endl;
    return 0;
}