#include <iostream>
#include <map>

using namespace std;

int main(){
    string s, e, q, time, name;
    map<string, string> in; //00:00-s까지 채팅을 남긴 회원
    map<string, string> out; //e - q까지 채팅을 남긴 회원

    cin>>s>>e>>q;

    while(cin>>time>>name){//입력이 있을 때동안 반복
        if(time<=s){
            in[name]=time;
        }
        else if(time>=e&&time<=q){
            out[name]=time;
        }
    }

    int result=0; //출석한 사람 수

    for(auto iter = in.begin();iter!=in.end();iter++){
        if(out.find(iter->first)!=out.end()){//in 맵에 있는 사람이 out 맵에도 있으면 (즉, 출석 처리의 조건을 모두 만족하면)
            result++;
        }
    }
    
    cout<<result;
    
}