#include <bits/stdc++.h>

using namespace std;

int main() {

    float a, v=0, p=0;
    int i;

    for(i=1; i<=6; i++){
            cin>>a;
        if(a>0){
           p++;
           v += a;
        }
    }
    cout<<p<<" valores positivos"<<endl;
    v = v / p;
    cout<<fixed<<setprecision(1)<<v<<endl;

    return 0;
}
