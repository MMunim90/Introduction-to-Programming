#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >> x;
    int y; cin >> y;

    if(x > y)
    {
        swap(x, y);
    }

    for(int i=x+1; i<y; i++)
    {
        int i2 = i+2;
        int i3 = i+3;
        if(i2 % 5 == 0 || i3 % 5 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}