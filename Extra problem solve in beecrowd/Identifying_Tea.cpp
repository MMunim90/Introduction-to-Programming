#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int ans = 0;
    if(t == a)
    {
        ans++;
    }
    if(t == b)
    {
        ans++;
    }
    if(t == c)
    {
        ans++;
    }
    if(t == d)
    {
        ans++;
    }
    if(t == e)
    {
        ans++;
    }

    cout << ans << endl;
    return 0;
}