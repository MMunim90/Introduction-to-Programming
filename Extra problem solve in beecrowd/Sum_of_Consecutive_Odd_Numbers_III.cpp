#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        int sum = 0;

        while (b--)
        {
            if(a % 2 == 0)
            {
                a++;
                b++;
            }
            else
            {
                sum += a;
                a+=2;
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}