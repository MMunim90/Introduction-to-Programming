#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        bool prime = true;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n % i == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            cout << n << " eh primo" << endl;
        }
        else
        {
            cout << n << " nao eh primo" << endl;
        }
    }
    
    return 0;
}