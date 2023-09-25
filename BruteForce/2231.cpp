#include <iostream>
#include <string>
 
using namespace std;


int findNum(int num){
    string stringNum=to_string(num);

    int n=num-9*stringNum.size();//분해합이 num인 가장 작은 자연수(모든 자리수가 9인 경우)

    while(true){//생성자가 될 수 있는 가장 작은 수부터 시작해서 분해합이 num이 될 때까지 1씩 더 함.
        int sum=0;
        stringNum=to_string(n);

        //각 자리수의 합 구하기
        for(int j=0;j<stringNum.size();j++){
            sum+=(stringNum[j]-'0');
        }
        sum+=n;
        if(sum==num){
            return n;
        }

        //생성자가 없는 경우
        if(n>num){
            return 0;
        }
        n++;
    }
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;

    cin>>num;

    string stringNum;

    cout<<findNum(num);
}