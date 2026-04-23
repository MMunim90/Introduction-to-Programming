#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, s;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>s;

        if(s%2==0 && s<0){
        cout<<"EVEN NEGATIVE"<<endl;
    }else if(s%2!=0 && s<0){
        cout<<"ODD NEGATIVE"<<endl;
    }else if(s%2==0 && s>0){
        cout<<"EVEN POSITIVE"<<endl;
    }else if(s%2!=0 && s>0){
        cout<<"ODD POSITIVE"<<endl;
    }else if(s==0){
        cout<<"NULL"<<endl;
    }
    }

    return 0;
}
