#include <iostream>
#include <vector>

using namespace std;

const int MAX = 5e6;

vector<int> findPrime(){
    vector<int> numbers(MAX+1,0);

    for(int i=2;i*i<=MAX;i++){
        if(numbers[i]==0){
            for(int j=i*i;j<=MAX;j+=i){
                if(numbers[j]!=0)
                    continue;
                numbers[j]=i;
            }
        }
    }
    return numbers;
}

int main(){
    int n, k;
    cin>>n;

    while(n--){
        cin>>k;

        vector<int> result=findPrime();

        while(result[k]!=0){
            cout<<result[k]<<' ';
            k=k/result[k];
        }
        cout<<k<<'\n';
        
    }

}