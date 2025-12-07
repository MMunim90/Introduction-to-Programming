#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;

    double sqart = 1 + (1 / (n + (1 / n)));

    cout << fixed << setprecision(10) << sqart << endl;
    return 0;
}