#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 1e4;
vector<int> s(SIZE);
int t=-1;

bool full(){
    return t==(SIZE-1);
}

void push(int item){
    t++;
    s[t]=item;
}

void pop(){
    if(t==-1){
        cout<<"-1"<<'\n';
    }
    else{
        cout<<s[t--]<<'\n';
    }
}

void empty(){
    if(t==-1){
        cout<<"1"<<'\n';
    }
    else{
        cout<<"0"<<'\n';
    }
}

void s_top(){
    if(t==-1){
        cout<<"-1"<<'\n';
    }
    else{
        cout<<s[t]<<'\n';
    }
}

int main(){
    int n;

    cin>>n;
    string input;
    int num;

    while(n--){
        cin>>input;

        if(input=="push"){
            cin>>num;
            if(!full()){
                push(num);
            }
        }
        else if(input=="pop"){
            pop();
        }
        else if(input=="size"){
            cout<<t+1<<'\n';
        }else if(input=="empty"){
            empty();
        }
        else if(input=="top"){
            s_top();
        }
    }

}