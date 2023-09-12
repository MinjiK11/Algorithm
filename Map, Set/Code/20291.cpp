#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string name;
    map<string, int> expansion;
    vector<string> file;//확장자 이름을 저장

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>name;
        int len=name.size()-(name.find('.')+1);//확장자 길이
        name=name.substr(name.find('.')+1,len);
        if(!expansion[name])// 확장자 이름이 중복되지 않고 저장될 수 있도록
            file.push_back(name);
        expansion[name]+=1;
        }
    
    sort(file.begin(),file.end());
    
    for(auto str:file){
        cout<<str<<' '<<expansion[str]<<'\n';
    }
}
