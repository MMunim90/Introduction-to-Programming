#include <bits/stdc++.h>

using namespace std;

int main() {

    double A, B, C, x, R1, R2;

    cin>>fixed>>setprecision(1)>>A>>B>>C;

    x = (B * B) - (4 * A * C);

    if(x > 0 && A != 0){

            x = sqrt(x);

           R1 = (-B + x) / (2 * A);
           R2 = (-B - x) / (2 * A);

    cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }


    return 0;
}
