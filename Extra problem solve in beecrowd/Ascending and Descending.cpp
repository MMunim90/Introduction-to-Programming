#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n=2, first_number, second_number;

    for(i=0; i<n; )
    {
        cin>>first_number>>second_number;

        if(first_number > second_number)
        {
            cout<<"Decrescente"<<endl;
        }
        else if(first_number < second_number)
        {
            cout<<"Crescente"<<endl;
        }
        else
        {
            break;
        }
    }
    i++;

    return 0;
}
