#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void get_result(queue<char> s){
    int front=0;
    int back=s.size()-1;
    int index=0;
    
    vector<char> result(s.size(),' ');
    queue<char> temp;

    while(!s.empty()){
        if(s.size()==1){
            temp.push(s.front());
            break;
        }

        char f=s.front();
        s.pop();
        if(s.front()==f){
            result[front++]=f;
            result[back--]=s.front();
            s.pop();
        }
        else{
            temp.push(f);
        }
    }

    if(!temp.empty()){
        if(temp.size()==1){
            result[front]=temp.front();
        }
        else{
            cout<<"I'm Sorry Hansoo";
            return;
        }
    }

    for(auto iter:result){
        cout<<iter;
    }
    
}

int main(){
    string input;

    cin>>input;
    sort(input.begin(),input.end());

    queue<char> list;
    
    for(int i=0;i<input.size();i++){
        list.push(input[i]);
    }

    get_result(list);

}