#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n, num;
    stack<int> s;
    string input;

    cin>>n;

    while(n--){
        if(input=="push"){
            cin>>num;
            s.push(num);
        }
        else if(input=="pop"){
            if(s.empty()){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<s.top()<<'\n';
                s.pop();
            }
        }
        else if(input=="size"){
            cout<<s.size()<<'\n';
        }
        else if(input=="empty"){
            cout<<s.empty()<<'\n';
        }
        else if(input=="top"){
            if(s.empty()){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<s.top()<<'\n';
            }
        }
    }

}