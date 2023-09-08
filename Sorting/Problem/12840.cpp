#include <iostream>
#include <vector>

using namespace std;

vector<int> time;
vector<int> t;

const int MINUTE = 60; //분 -> 초
const int HOUR = 60*MINUTE;//시간 -> 초
const int DAY=24*HOUR;//하루 -> 초

//초 -> 시간, 분, 초
void secTohms(int s){
    s%=DAY;//24시간이 넘어갈 수도 있으니 나머지 연산자 사용
    t[0]=(s/60)/60;
    t[1]=(s/60)%60;
    t[2]=s%60;
}

void forward(){//시간을 앞으로 돌릴 때
    if(time[2]>=60){
        time[2]-=60;
        time[1]++;
    }
    if(time[1]>=60){
        time[1]-=60;
        time[0]++;
    }
    if(time[0]>23)
        time[0]-=24;
}

void backward(){//시간을 뒤로 돌릴 때
    if(time[2]<0){
        time[2]+=60;
        time[1]--;
    }
    if(time[1]<0){
        time[1]+=60;
        time[0]--;
    }
    if(time[0]<0)
        time[0]+=24;
}

void change(int T, int c){
    secTohms(c);

    switch(T){
        case 1:
            for(int i=0;i<3;i++)
                time[i]+=t[i];
            forward();
            break;
        case 2:
            for(int i=0;i<3;i++)
                time[i]-=t[i];
            backward();
            break;
    }
}

int main(){
    int n, T, c;

    time.assign(3,0);
    t.assign(3,0);

    for(int i=0;i<3;i++)
        cin>>time[i];

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>T;
        if(T==3){
            for(int i=0; i<3;i++)
                cout<<time[i]<<' ';
            cout<<'\n';
        }
        else{
            cin>>c;
            change(T,c);
        }
    }

}