#include <bits/stdc++.h>

using namespace std;

int main() {
    float a,b,c,perimeter,area;

    cin>>fixed>>setprecision(1)>>a>>b>>c;

    if((a+b)>c && (a+c)>b && (b+c)>a){
        perimeter = (a + b + c);
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<perimeter<<endl;
    }else{
        area = ((a + b) / 2) * c;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
    }

    return 0;
}
