#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char ch1, ch2;

    cin >> a >> ch1 >> b >> ch2 >> c;

    cout << setw(2) << setfill('0') << b << '/' << setw(2) << setfill('0') << a << '/' << setw(2) << setfill('0') << c << endl;
    cout << setw(2) << setfill('0') << c << '/' << setw(2) << setfill('0') << b << '/' << setw(2) << setfill('0') << a << endl;
    cout << setw(2) << setfill('0') << a << '-' << setw(2) << setfill('0') << b << '-' << setw(2) << setfill('0') << c << endl;
    return 0;
}