#include <bits/stdc++.h>

using namespace std;

int main() {

    double x, y;

    cin>>fixed>>setprecision(1)>>x>>y;

    if(x>0 && y>0){
        cout<<"Q1"<<endl;
    }else if(x<0 && y>0){
        cout<<"Q2"<<endl;
    }else if(x<0 && y<0){
        cout<<"Q3"<<endl;
    }else if(x>0 && y<0){
        cout<<"Q4"<<endl;
    }else if(x == 0 && y){
        cout<<"Eixo Y"<<endl;
    }else if(y == 0 && x){
        cout<<"Eixo X"<<endl;
    }else if((x+y) == 0){
        cout<<"Origem"<<endl;
    }

    return 0;
}
