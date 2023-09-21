#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int isPrime(int n,int k, vector<bool> &is_prime){
    is_prime[0]=is_prime[1]=false;
    
    int cnt=0;

    for(int i=2;i<=sqrt(n);i++){
        if(is_prime[i]=true){
            cnt++;
            if(cnt==k){
                return i;
                }
            is_prime[i]=false;
            for(int j=i*i;j<=n;j+=i){
                if(is_prime[j]==true){
                    cnt++;
                    if(cnt==k){
                        return j;
                    }
                }
                is_prime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(is_prime[i]==true){
            cnt++;
            is_prime[i]=false;
            if(cnt==k){
                return i;
            }
        }
    }
}

int main(){
    int n, k;

    cin>>n>>k;

    vector<bool> prime(n,true);
    int idx=isPrime(n,k,prime);

    cout<<idx;


}