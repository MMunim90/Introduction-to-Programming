#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,i,p=0;

    cin>>a;
    for(i=1; i<=a; i++){
        if(a%2!=0){
            p++;
            if(p%2!=0){
                cout<<p<<endl;
            }
        }
    if(a%2==0){
        p++;
        if(p%2!=0){
            cout<<p<<endl;
        }
    }
    }

    return 0;
}
