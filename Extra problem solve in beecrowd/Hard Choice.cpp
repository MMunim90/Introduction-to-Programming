#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int a1, b1, c1;

    cin >> a >> b >> c;
    cin >> a1 >> b1 >> c1;

    int rem_a=0, rem_b=0, rem_c=0;

    if(a1>=a)
    {
        rem_a = a1-a;
    }
    if(b1>=b)
    {
        rem_b = b1-b;
    }
    if(c1>=c)
    {
        rem_c = c1-c;
    }

    cout << rem_a + rem_b + rem_c << endl;
    return 0;
}