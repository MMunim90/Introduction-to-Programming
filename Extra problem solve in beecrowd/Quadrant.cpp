#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n=2, x, y;

    for(i=0; i<n; )
    {
        cin>>x>>y;

        if(x>0 && y>0)
        {
            cout<<"primeiro"<<endl;
        }
        else if(x<0 && y>0)
        {
            cout<<"segundo"<<endl;
        }
        else if(x>0 && y<0)
        {
            cout<<"quarto"<<endl;
        }
        else if(x<0 && y<0)
        {
            cout<<"terceiro"<<endl;
        }
        else
        {
            break;
        }
    }
    i++;

    return 0;
}
