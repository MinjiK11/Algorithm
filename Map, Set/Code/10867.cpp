#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    set<int> s;
    int input;

    for(auto i=0;i<n;i++){
        cin>>input;
        s.insert(input);
    }

    for(int i:s)
        cout<<i<<' ';
}