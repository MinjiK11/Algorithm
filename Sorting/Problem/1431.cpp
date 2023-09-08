#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//모든 자리수의 합
int str_sum(string a){
    int s=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&&a[i]<='Z')//A-Z 문자라면
            s+=0;
        else{
            s+=int(a[i]-'0');//숫자 아스키 코드에 대응되는 수가 아니라 1-9 수를 더해야 함.
        }
    }

    return s;
}

bool cmp(string a, string b){

    if(a.size()!=b.size()){//A와 B의 길이가 다르면
        return a.size()<b.size();//짧은 것이 먼저 온다.
    }
    
    if(a.size()==b.size()){//A와 B의 길이가 같고
        if(str_sum(a)==str_sum(b)){//A의 모든 자리수의 합과 B의 모든 자리수의 합이 같으면
                return a<b;//사전순으로 비교한다.
        }
        return str_sum(a)<str_sum(b);//자리수의 합이 작은 것이 먼저 온다.
    }

}

int main(){
    int n;

    cin>>n;
    vector<string> serial(n);

    for(int i=0;i<n;i++)
        cin>>serial[i];
    
    sort(serial.begin(),serial.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<serial[i]<<'\n';
    }

}