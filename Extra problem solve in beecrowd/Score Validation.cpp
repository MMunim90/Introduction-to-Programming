#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j=0;
    float avg, n, N[3];

    while(1)
    {
        cin>>n;
        if(n>=0 && n<=10)
        {
            N[j] = n;
            j++;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
        if(j>1)
        {
            break;
        }
    }
    avg = (N[0] + N[1]) / 2;
    cout<<"media = "<<avg<<endl;

    return 0;
}
