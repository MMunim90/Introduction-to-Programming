#include <bits/stdc++.h>

using namespace std;

int main() {

    double n1, n2, n3, n4, n5, avg, avg2;

    cout<<"Enter scores obtained by a student: ";
    cin>>fixed>>setprecision(1)>>n1>>n2>>n3>>n4;

    avg = (n1*2+n2*3+n3*4+n4*1)/10;

    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;

    if(avg>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }else if(avg<5.0){
        cout<<"Aluno reprovado."<<endl;
    }else if(avg>=5.0 && avg<=6.9){
        cout<<"Aluno em exame."<<endl;

    cin>>fixed>>setprecision(1)>>n5;

        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<n5<<endl;

    avg2 = (avg+n5)/2;

    if(avg2>=5.0){
        cout<<"Aluno aprovado."<<endl;
        cout<<fixed<<setprecision(1)<<"Media final: "<<avg2<<endl;
    }else if(avg2<=4.9){
        cout<<"Aluno reprovado."<<endl;
        cout<<fixed<<setprecision(1)<<"Media final: "<<avg2<<endl;
    }
    }

    return 0;
}
