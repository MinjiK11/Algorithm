#include <iostream>
#include <vector>

using namespace std;

vector<int> input;
vector<int> sorted;

void merge(int left, int mid, int right){
    int i, j, k;

    i=left;
    j=mid+1;
    k=left;

    while(i<=mid&&j<=right){
        if(input[i]<input[j]){
            sorted[k++]=input[i++];
        }
        else
            sorted[k++]=input[j++];
    }

    if(i<=mid){//왼쪽 array의 원소가 남은 경우
        for(int l=i;l<=mid;l++){
            sorted[k]=input[l];
            k++;
        }
    }
    else if(j<=right){//오른쪽 array의 원소가 남은 경우
        for(int l=j;l<=right;l++){
            sorted[k]=input[l];
            k++;
        }
    }

    //sorted array input array로 복사
    for(int l=left;l<=right;l++)
        input[l]=sorted[l];

}

void divide(int left,int right){
    if(left<right){
        int mid=(left+right)/2;

        divide(left, mid);
        divide(mid+1, right);

        merge(left,mid,right);
    }
}

int main(){
    int n;
     
    cin>>n;

    input.assign(n,0);
    sorted.assign(n,0);

    for(int i=0;i<n;i++)
        cin>>input[i];
    
    divide(0,n-1);

    for(int i=0;i<n;i++)
        cout<<input[i]<<'\n';
}
