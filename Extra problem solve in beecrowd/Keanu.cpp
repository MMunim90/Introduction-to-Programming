#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;

    int square = pow(n, 2);

    // cout << square;

    if (n % 2 != 0)
    {
        a = (square / 2) + 1;
        b = square - a;
        cout << a << " " << "casas brancas e" << " " << b << " " << "casas pretas" << endl;
    }
    if (n % 2 == 0)
    {
        a = square / 2;
        b = square - a;
        cout << a << " " << "casas brancas e" << " " << b << " " << "casas pretas" << endl;
    }
    return 0;
}