#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, z, l;
    while(cin >> h >> z >> l)
    {
        if(z > h && h > l)
        {
            cout << "huguinho" << endl;
        }
        else if(h > z && z > l)
        {
            cout << "zezinho" << endl;
        }
        else if(h > l && l > z)
        {
            cout << "luisinho" << endl;
        }
        else if(z > l && l > h)
        {
            cout << "luisinho" << endl;
        }
        else if(l > h && h > z)
        {
            cout << "huguinho" << endl;
        }
        else if(l > z && z > h)
        {
            cout << "zezinho" << endl;
        }
    }
    return 0;
}