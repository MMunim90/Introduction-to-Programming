#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        float x;
        cin >> x;
        float fastest_attempt = 11;

        for (int i = 0; i < x; i++)
        {
            if (x < fastest_attempt)
            {
                fastest_attempt = x;
            }
        }
        cout << fastest_attempt << endl;
    }

    return 0;
}