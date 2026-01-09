#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int sem1 = (a >= b) ? a : b;
    int sem2 = (c >= d) ? c : d;
    (sem1 >= sem2) ? cout << sem1 << endl : cout << sem2 << endl;
    return 0;
}