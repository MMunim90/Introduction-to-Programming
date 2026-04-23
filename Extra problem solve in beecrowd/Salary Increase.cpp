#include <bits/stdc++.h>

using namespace std;

int main() {

    float s, ns, me;

    cin>>fixed>>setprecision(2)>>s;

    if(s>=0 && s<=400.00){
        ns = ((s * 15) / 100) + s;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        me = (ns-s);
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<me<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 15 %"<<endl;
    }else if(400.01<=s && s<=800.00){
        ns = ((s * 12) / 100) + s;
        me = (ns-s);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<me<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 12 %"<<endl;
    }else if(800.01<=s && s<=1200.00){
        ns = ((s * 10) / 100) + s;
        me = (ns-s);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<me<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 10 %"<<endl;
    }else if(1200.01<=s && s<=2000.00){
        ns = ((s * 7) / 100) + s;
        me = (ns-s);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<me<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 7 %"<<endl;
    }else if(2000.00<s){
        ns = ((s * 4) / 100) + s;
        me = (ns-s);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<me<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
