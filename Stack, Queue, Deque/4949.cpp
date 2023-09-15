#include <iostream>
#include <stack>
#include <string>

using namespace std;

void match(string input){
    stack<char> p;

    for(int i=0;i<input.size();i++){
        if(input[i]=='('||input[i]=='['){
            p.push(input[i]);
        }

        if(input[i]==')'){
            if(p.empty()){
                cout<<"no\n";
                return;
            }
            else if(p.top()!='('){
                cout<<"no\n";
                return;
            }
            p.pop();
        }

        if(input[i]==']'){
            if(p.empty()){
                cout<<"no\n";
                return;
            }
            else if(p.top()!='['){
                cout<<"no\n";
                return;
            }
            p.pop();
        }
        
    }
    if(!p.empty()){
        cout<<"no\n";
        return;
    }

    cout<<"yes\n";

    
}

int main(){
    string input;

    while(true){
        //cin.ignore();
        std::getline(cin,input);

        if(input==".")
            break;

        match(input);
    }
}