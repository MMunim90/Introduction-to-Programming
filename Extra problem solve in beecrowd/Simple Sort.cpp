#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, temp;
    int x[3];
    cin>>a>>b>>c;
    x[0] = a;
    x[1] = b;
    x[2] = c;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(x[i]<x[j]){
                temp = x[j];
                x[j] = x[i];
                x[i] = temp;
            }
        }
    }

    cout<<x[0]<<"\n"<<x[1]<<"\n"<<x[2]<<"\n"<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    return 0;
}
