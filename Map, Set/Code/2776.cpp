#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m;
    int input;

    cin>>t;

    while(t--){
        cin>>n;
        set<int> note1;
        for(int i=0;i<n;i++){
            cin>>input;
            note1.insert(input);
        }

        cin>>m;
        int note2;
        vector<int> result(m,0);

        for(int j=0;j<m;j++){
            cin>>note2;
            if(note1.find(note2)!=note1.end()){//note1 set에 note2의 값이 있으면
                result[j]=1;
            }
            else{
                result[j]=0;
            }
        }

        for(int i=0;i<m;i++){
            cout<<result[i]<<'\n';
        }
    }
}