#include <bits/stdc++.h>

using namespace std;

int main() {

    float s, t=0;

    cin>>fixed>>setprecision(2)>>s;

    if(s>2000){
        s = s - 2000.00;
        if(s>=0 && s<=1000){
            t = (s * 8) / 100.00;
            s = s - 1000.00;
        }
        else if(s>1000){
            t = (1000 * 8) / 100.00;
            s = s - 1000.00;
        }
        if(s>=0 && s<=1500){
            t = ((s * 18) / 100.00) + t;
            s = s - 1500.00;
        }
        else if(s>1500){
            t = ((1500 * 18) / 100.00) + t;
            s = s - 1500.00;
        }
        if(s>0){
            t = ((s * 28) / 100.00) + t;
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }
    else{
        cout<<"Isento"<<endl;
    }
    return 0;
}

