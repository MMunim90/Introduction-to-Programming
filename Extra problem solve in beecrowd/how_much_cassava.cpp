#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a=300, b=1500, c=600, d=1000, e=150, sum;

    sum = a* abs(n) + b*abs(n) + c*abs(n) + d*abs(n) + e*abs(n) + 225;

    cout << sum << endl;
    return 0;
}