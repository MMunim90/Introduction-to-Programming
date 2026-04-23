#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, i, max = 0, position = 0;

    for(i=1; i<=100; i++){
        cin>>a;
        if(a > max){
            max = a;
            position = i;
        }
    }

        cout<<max<<endl;
        cout<<position<<endl;

    return 0;
}
