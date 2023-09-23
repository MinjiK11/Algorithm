#include <iostream>

using namespace std;

int gcd(int n1,int n2){
    if(n1<n2){
        swap(n1,n2);
    }
    
    while(n2){
        n1%=n2;
        swap(n1,n2);
    }

    return n1;

}
int main(){
    string input;
    cin>>input;

    int idx=input.find(':');
    
    string temp1, temp2;
    int n1, n2;

    temp1=input.substr(0,idx);
    temp2=input.substr(idx+1);

    n1=stoi(temp1);
    n2=stoi(temp2);

    int result=gcd(n1,n2);

    cout<<n1/result<<':'<<n2/result;

}