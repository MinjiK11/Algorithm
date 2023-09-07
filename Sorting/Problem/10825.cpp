#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    int kor;
    int eng;
    int math;
};

bool compare(student a, student b){
    if(a.kor!=b.kor){
        if(a.eng!=b.eng){
            if(a.math!=b.math){
                return a.name<b.name;
            }
            return a.math>b.math;
        }
        return a.eng<b.eng;
    }
    return a.kor>b.kor;
}

bool cmpAdv(student a, student b){
    if(a.kor!=b.kor){//국어 점수가 다르면
        return a.kor>b.kor;//국어 점수 기준 내림차순 정렬
    }
    if(a.eng!=b.eng){//국어 점수가 같으면
        return a.eng<b.eng;//영어 점수 기준 오름차순 정렬
    }
    if(a.math!=b.math){//국어 점수, 영어 점수가 같으면
        return a.math>b.math;//수학 점수 기준으로 내림차순 정렬
    }
    return a.name<b.name;//국어 점수, 영어 점수, 수학 점수 모두 같으면 이름 기준 오름차순 정렬
}

int main(){
    int n;

    cin>>n;

    vector<student> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].kor>>arr[i].eng>>arr[i].math;
    }

    sort(arr.begin(),arr.end(),cmpAdv);

    for(int i=0;i<n;i++){
        cout<<arr[i].name<<'\n';
    }

    return 0;

}
