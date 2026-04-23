#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m=0, o=0, p=0, q=0, x;
    float c,d,f;
    char y;
    cin>>n;
    for(int i=1; i<=n; i++){
                    cin>>x>>y;
                     if(y == 'C'){
                        o += x;
                     }
                     else if(y == 'R'){
                        p += x;
                     }
                     else if(y == 'S'){
                        q += x;
                     }
                     m += x;
    }
            c = ((float)o / m) * 100;
            d = ((float)p / m) * 100;
            f = ((float)q / m) * 100;

cout<<"Total: "<<m<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<o<<endl;
cout<<"Total de ratos: "<<p<<endl;
cout<<"Total de sapos: "<<q<<endl;
cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<c<<" %"<<endl;
cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<d<<" %"<<endl;
cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<f<<" %"<<endl;

    return 0;
}
