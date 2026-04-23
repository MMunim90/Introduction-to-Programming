#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, t, n, sum;
    cin>>n;
    while(n>0)
    {
        cin>>a>>b;
        if(a>b)
        {
            t = a;
            a = b;
            b = t;
        }
        sum = 0;
        for(a=a+1; a<=b-1; a++)
        {
            if(a%2!=0)
            {
                sum+=a;

            }
        }
        cout<<sum<<endl;
        n--;
    }


    return 0;
}
