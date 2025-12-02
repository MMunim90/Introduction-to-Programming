#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        if(str == "P=NP")
        {
            cout << "skipped" << endl;
            continue;
        }

        int a = int(str[0] - 48);
        int b = int(str[2] - 48);

        int result = a + b;

        cout << result << endl;
    }
    
    return 0;
}