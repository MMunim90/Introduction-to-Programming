#include<bits/stdc++.h>
using namespace std;
int main()
{
    double radius;
    cin >> radius;

    double area = 3.141592653 * (radius * radius);

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}