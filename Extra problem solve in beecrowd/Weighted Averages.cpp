#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, i, s;

    float j[5], sum;

    cin>>n;

    for(i=1; i<=n; i++){
            sum = 0;
        for(s=0; s<3; s++){
            cin>>fixed>>setprecision(1)>>j[s];
        }
        j[0] = j[0] * 2;
        j[1] = j[1] * 3;
        j[2] = j[2] * 5;

        for(s=0; s<3; s++){
            sum = sum + j[s];
        }
        sum = sum / 10;

        cout<<fixed<<setprecision(1)<<sum<<endl;
    }

    return 0;
}
