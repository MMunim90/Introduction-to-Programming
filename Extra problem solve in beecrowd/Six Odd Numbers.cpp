#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, i, p=0;

    cin>>a;

    for(i=p; i<(a+10); i++){
        if(a%2!=0){
            p++;
            if(p%2!=0 && a<=p){
                cout<<p<<endl;
            }
        }
    }
    for(i=p; i<(a+12); i++){
        if(a%2==0){
         p++;
         if(p%2!=0 && a<=p){
            cout<<p<<endl;
         }
        }
    }

    return 0;
}
