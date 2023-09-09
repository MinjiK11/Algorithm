#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> tip;

//팁 계산
long long tip_sum(int n){
    long long sum=0;

    for(int i=1;i<=n;i++){
        tip[i-1]=tip[i-1]-(i-1);
        if(tip[i-1]>=0)//팁이 음수일 경우 받지 못하는 것으로 간주
            sum+=tip[i-1];
    }

    return sum;

}

int main(){
    int n;
    long long sum=0;
    
    cin>>n;

    tip.assign(n,0);

    for(int i=0;i<n;i++){
        cin>>tip[i];
    }

    sort(tip.begin(),tip.end(),greater<>());
    sum=tip_sum(n);

    cout<<sum;
    
}