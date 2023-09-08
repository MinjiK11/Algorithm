#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
vector<int> b;
vector<int> c;
vector<int> index;

void index_big(int n){
    int big=0;
    index.assign(n,0);
    c.assign(n,0);

    for(int i=0;i<n;i++)
        c[i]=b[i];//b 배열을 c 배열에 복사

    //b 배열 원소 큰 순서대로 그 인덱스 값을 새로운 배열에 저장
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[big]<c[j])
                big=j;
        }
        index[i]=big;
        c[big]=-1;
    }

}

void sorting(int n){
    vector<int> a_sorted(n);

    for(int i=0;i<n;i++){
        a_sorted[index[i]]=a[i];//배열 a의 i번째로 작은 수는 sorted array의 i번째 위치에 삽입
    }

    for(int i=0;i<n;i++){
        a[i]=a_sorted[i];
    }

}

int main(){
    int n,s=0;

    cin>>n;

    a.assign(n,0);
    b.assign(n,0);

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
        cin>>b[i];

    sort(a.begin(),a.end());
    index_big(n);
    sorting(n);

    for(int i=0;i<n;i++){
        s+=a[i]*b[i];
    }

    cout<<s;
}