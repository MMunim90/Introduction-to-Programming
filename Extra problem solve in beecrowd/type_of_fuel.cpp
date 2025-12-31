#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alco_count = 0, gaso_count = 0, dise_count = 0;
    while(1)
    {
        int n; cin >> n;
        if(n == 4)
        {
            break;
        }
        else if(n == 1)
        {
            alco_count++;
        }
        else if(n == 2)
        {
            gaso_count++;
        }
        else if(n == 3)
        {
           dise_count++;
        }
        else
        {
            continue;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alco_count << endl;
    cout << "Gasolina: " << gaso_count << endl;
    cout << "Diesel: " << dise_count << endl;
    return 0;
}