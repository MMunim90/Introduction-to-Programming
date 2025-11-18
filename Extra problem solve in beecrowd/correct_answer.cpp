#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int arr[n];

        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }

        for(int i=1; i<=n; i++)
        {
            cout << "resposta " << i << ": " << arr[i] << endl;
        }
    }
    
    return 0;
}