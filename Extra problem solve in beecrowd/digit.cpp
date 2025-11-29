#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;

        cin >> n >> m;

        long long int power = pow(n, m);

        cout << power << endl;
    }
    
    return 0;
}