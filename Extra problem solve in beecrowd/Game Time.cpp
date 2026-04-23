#include <bits/stdc++.h>

using namespace std;

int main() {

    int start_time, end_time, total_duration;

    cin>>start_time>>end_time;

    if(12 < start_time){
        total_duration = (24 - start_time) + end_time;
        cout<<"O JOGO DUROU "<<total_duration<<" HORA(S)"<<endl;
    }else if(start_time == end_time){
        total_duration = (start_time + 24) - end_time;
        cout<<"O JOGO DUROU "<<total_duration<<" HORA(S)"<<endl;
    }else if(12 > start_time){
        total_duration = (end_time - start_time);
        cout<<"O JOGO DUROU "<<total_duration<<" HORA(S)"<<endl;
    }

    return 0;
}
