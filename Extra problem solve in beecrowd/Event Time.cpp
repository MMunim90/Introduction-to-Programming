#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c,d,d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,data;

    char dia1[5],dia2[5],del[5];

    cin>>dia1>>d1>>h1>>del>>m1>>del>>s1;
    cin>>dia2>>d2>>h2>>del>>m2>>del>>s2;

    st1 = s1 + m1 * 60 + h1 * 60 * 60 + d1 * 24 * 60 * 60;
    st2 = s2 + m2 * 60 + h2 * 60 * 60 + d2 * 24 * 60 * 60;

    data = st2 - st1;

    a = data / (24 * 60 * 60);
    b = (data - a * 24 * 60 * 60) / (60 * 60);
    c = (data - a * 24 * 60 * 60 - b * 60 * 60) / 60;
    d = (data - a * 24 * 60 * 60 - b * 60 * 60 - c * 60);

    cout<<a<<" dia(s)"<<endl;
    cout<<b<<" hora(s)"<<endl;
    cout<<c<<" minuto(s)"<<endl;
    cout<<d<<" segundo(s)"<<endl;

    return 0;
}
