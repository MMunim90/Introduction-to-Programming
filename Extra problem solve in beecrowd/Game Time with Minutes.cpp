#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s_h, s_m, e_h, e_m;
    cin>>s_h>>s_m>>e_h>>e_m;

    if(e_m<s_m){
        e_m += 60;
        e_h -= 1;
        e_m -= s_m;
        if(e_h<s_h){
            e_h += 24;
            e_h -= s_h;
        }else{
             e_h -= s_h;
        }
        cout<<"O JOGO DUROU "<<e_h<<" HORA(S) E "<<e_m<<" MINUTO(S)"<<endl;
    }else if(s_h == e_h && s_m == e_m){
            cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        }else if(e_m>s_m){
             e_m -= s_m;
             if(e_h<s_h){
                e_h += 24;
                e_h -= s_h;
             }else{
                e_h -= s_h;
             }
             cout<<"O JOGO DUROU "<<e_h<<" HORA(S) E "<<e_m<<" MINUTO(S)"<<endl;
        }
    return 0;
}
