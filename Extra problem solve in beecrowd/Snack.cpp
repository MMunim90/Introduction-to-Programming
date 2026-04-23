#include <bits/stdc++.h>

using namespace std;

int main() {

    int x,y;

    cin>> x;

    if(x==1){
        cin>> y;
      float total = y * 4.00;
       cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    }else if(x==2){
        cin>> y;
      float total = y * 4.50;
       cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    }else if(x==3){
        cin>> y;
      float total = y * 5.00;
       cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    }else if(x==4){
        cin>> y;
      float total = y * 2.00;
       cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    }else if(x==5){
        cin>> y;
      float total = y * 1.50;
       cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    }

    return 0;
}
