#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main(){
    int n, m;
    string name;

    cin>>n>>m;
    map<int,string> pokemon1;
    map<string, int> pokemon2;
    vector<string> input(m);

    for(int i=1;i<=n;i++){
        cin>>name;

        pokemon1[i]=name;
        pokemon2[name]=i;
    }

    for(int i=0;i<m;i++){
        cin>>input[i];
    }

    for(int i=1;i<=m;i++){
        if(isdigit(input[i-1][0])){
            cout<<pokemon1[stoi(input[i-1])]<<'\n';
        }
        else{
            cout<<pokemon2[input[i-1]]<<'\n';
        }
    }
        
}