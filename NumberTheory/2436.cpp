#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> divisor;

void getDivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(i>(n/i))
                break;
            divisor.push_back(i);
        }
    }
}

int hasDivisor(int n1,int n2){
    if(n1==n2)
        return false;
    while(n2){
        n1%=n2;
        swap(n1,n2);
        if(n2==1)
            return false;
    }
    return true;
}

int main(){
    int gcd,lcm;

    cin>>gcd>>lcm;

    int temp=lcm/gcd;
    
    getDivisor(temp);

    for(int i=divisor.size()-1;i>=0;i--){
        if(!hasDivisor(divisor[i],temp/divisor[i])){
            cout<<gcd*divisor[i]<<' '<<gcd*(temp/divisor[i]);
            break;
        }
    }
    
}