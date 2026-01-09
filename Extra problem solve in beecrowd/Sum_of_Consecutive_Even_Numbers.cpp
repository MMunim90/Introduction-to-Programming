#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            if (n % 2 == 0)
            {
                sum += n;
                n += 2;
            }
            else
            {
                n++;
                i--;
            }
        }
        cout << sum << endl;
    }

    return 0;
}