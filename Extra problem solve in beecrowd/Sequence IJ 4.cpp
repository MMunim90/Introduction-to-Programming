#include <bits/stdc++.h>

using namespace std;

int main() {

    float a, b;

    for(a=0; a<2.1; a+=0.2){
        for(b=1; b<=3; b++){
                if((0<a && a<1) || (1<a && a<2)){
                    cout<<fixed<<setprecision(1)<<"I="<<a<<" "<<"J="<<a+b<<endl;
                }else{
           cout<<"I="<<(int)a<<" "<<"J="<<(int)a+(int)b<<endl;
        }
        }
    }

    return 0;
}
