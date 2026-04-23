#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p = 0, a = 0;
    long long int s;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>s;
        if(s>=10 && s<=20){
                p++;
        }
        else{
                a++;
        }
    }
    cout<<p<<" in"<<endl;
    cout<<a<<" out"<<endl;

    return 0;
}
