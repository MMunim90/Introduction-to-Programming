#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, x, y;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;

        double divition = (double) x / (double) y;
        if(y == 0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(1)<<divition<<endl;
        }
    }
    return 0;
}
