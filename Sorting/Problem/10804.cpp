#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> card;

//값 바꾸기
void swap(int a, int b, int t){
    t=a;
    a=b;
    b=t;
}

//역순으로 배치
void reverse(int begin, int end){
    int n=(end-begin)+1; //범위 내 원소 개수
    int temp;

    for(int i=0;i<n;i++){
        for(int j=begin;j<=(end-i)-1;j++){
            temp=card[j];
            card[j]=card[j+1];
            card[j+1]=temp;
        }
    }
}

int main(){
    int begin, end;

    card.assign(20,0);

    for(int i=1;i<=20;i++)
        card[i-1]=i;

    for(int i=0;i<10;i++){
        cin>>begin>>end;
        reverse(begin-1,end-1);
    }

    for(int i=0;i<20;i++){
        cout<<card[i]<<' ';
    }
        
}