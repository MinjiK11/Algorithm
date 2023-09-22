#include <iostream>
#include <map>
#include <stack>

using namespace std;

map<char,char> p;

void createMap(){
    p[')']='(';
    p[']']='[';
}

int calcString(string input){
    stack<char> s;
    int output=0;
    int temp=1;
    map<char,int> number;

    number['(']=2;
    number['[']=3;

    for(int i=0;i<input.length();i++){
        switch(input[i]){
            case '(':
            case '[':
                s.push(input[i]);
                temp*=number[input[i]];
                break;
            case ')':
            case ']':
                if(s.empty()||p[input[i]]!=s.top()){
                    return 0;
                }
                if(input[i-1]==p[input[i]]){
                    output+=temp;
                }
                temp/=number[p[input[i]]];
                s.pop();
                
                break;
        }
    }
    if(s.empty()){
        return output;
    }
    return 0;
}

int main(){
    string input;

    cin>>input;

    createMap();
    cout<<calcString(input);

}