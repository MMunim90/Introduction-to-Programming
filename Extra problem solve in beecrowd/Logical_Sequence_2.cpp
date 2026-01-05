#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int j = 1;
    for (int i = 1; i <= y; i++)
    {
        
        cout << i;
        
        if(x*j == i)
        {
            cout << endl;
            j++;
        }
        else
        {
            cout << " ";
        }
    }
    return 0;
}