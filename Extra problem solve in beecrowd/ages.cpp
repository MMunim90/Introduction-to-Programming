#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i = 0;
    float sum = 0;
    while (cin >> n)
    {
        if(n < 0)
        {
            cout << fixed << setprecision(2) << sum / i << endl;
            return 0;
        }

        sum = sum + n;
        i++;
    }
    
    return 0;
}