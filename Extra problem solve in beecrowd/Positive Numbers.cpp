#include <bits/stdc++.h>

using namespace std;

int main() {

    float a;
    int i, c=0;

    for(i=1; i<=6; i++){
        cin>>a;
        if(a>0){
            c++;
        }
    }

    cout<<c<<" valores positivos"<<endl;

    return 0;
}
