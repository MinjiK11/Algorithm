#include <iostream>
#include <vector>

using namespace std;

int gcdInter(int a, int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int main(){
    int t;

    cin>>t;
    vector<int> result;

    while(t--){
        int n;
        cin>>n;
        vector<int> num(n,0);
        int sum=0;

        for(int i=0;i<n;i++){
            cin>>num[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum+=gcdInter(num[i],num[j]);
            }
        }

        result.push_back(sum);
    }

    for(auto iter:result){
        cout<<iter<<'\n';
    }
}