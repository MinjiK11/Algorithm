#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin>>n;
    
    string stringNum="666";
    int temp;
    int cnt=0;

    while(true){
        if(stringNum.find("666")!=string::npos){
            cnt++;
        }
        if(cnt==n){
            break;
        }
        temp=stoi(stringNum);
        temp++;
        stringNum=to_string(temp);
    }

    for(auto iter:stringNum){
        cout<<iter;
    }



}