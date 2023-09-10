#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main(){
    int n,result=0;
    string name;//나가는 차 번호
    
    cin>>n;
    map<string,int> car1;
    vector<int> order(n,0);//들어오는 차 순서
    vector<string> num(n);//들어오는 차 번호

    for(int i=0;i<n;i++){
        cin>>num[i];
        car1[num[i]]=i;
    }

    for(int i=0;i<n;i++){
        cin>>name;
        order[i]=car1[name];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(order[i]>order[j]){
                result++;
                break;
            }
        }
    }

    cout<<result;
}