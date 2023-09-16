#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

//산술평균
void average(vector<int> list){
    double sum=0;
    for(int i=0;i<list.size();i++){
        sum+=list[i];
    }
    
    float result=0.0;

    if(sum<0){
        result=abs(sum)/list.size();
        result=-round(result);
    }
    else{
        result=sum/list.size();
    }

    if(result==-0){
        cout<<"0\n";
        return;
    }

    cout<<round(result)<<'\n';
}

//중간값
void center(vector<int> list){
    cout<<list[list.size()/2]<<'\n';
}

//최빈값
void most(vector<int> list){
    map<int, int> m;

    for(int i=0;i<list.size();i++){
        m[list[i]]+=1;
    }

    int big=m.begin()->second;//가장 많이 나온 횟수 찾기
    for(auto iter = m.begin();iter!=m.end();iter++){
        if(iter->second > big)
            big=iter->second;
    }

    vector<int> v;//최빈값이 여러 개인 경우를 위해 최빈값이 될 수 있는 숫자 저장
    for(auto iter = m.begin();iter!=m.end();iter++){
        if(iter->second==big)
            v.push_back(iter->first);
    }

    if(v.size()!=1){
        cout<<v[1]<<'\n';//최빈값이 여러 개인 경우
    }
    else{
        cout<<v[0]<<'\n';//최빈값이 하나인 경우
    }
}


int main(){
    int n;

    cin>>n;
    vector<int> number(n,0);

    for(int i=0;i<n;i++){
        cin>>number[i];
    }

    sort(number.begin(),number.end());

    average(number);
    center(number);
    most(number);
    cout<<number[n-1]-number[0]<<'\n';
}