#include <iostream>
#define SWAP(x, y, t) ((t)=(x), (x)=(y),(y)=(t)) //원소 바꾸기
using namespace std;

void bubbleSort(int array[], int n){
    int temp;

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){//인덱스 i 위치에 있는 원소는 이미 정렬됨.
            if(array[j]>array[j+1]) 
                SWAP(array[j], array[j+1],temp);
        }
    }
}

//정렬을 하는 중에 정렬이 완료되었다면 더 이상 과정을 반복하지 않는다.
void bubbleSortAdv(int array[],int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) { 
        bool isSwap = false; //두 원소 바뀌었는지 확인
        for (int j = 0; j < n - i - 1; j++) { 
            if (array[j] > array[j + 1]) {
                isSwap = true;
                SWAP(array[j], array[j + 1],temp); //두 원소 바꾸기
            }
        }
        if (!isSwap) { //한 번도 바뀐 적이 없다면 == 정렬된 상태
            break; //정렬 과정을 더 이상 반복할 필요 X
        }
    }
}

int main(){
    int number; //수의 개수

    cin >> number;
    int input[number]={0};

    for(int i=0;i<number;i++)
        cin >> input[i];

    bubbleSort(input, number);

    for(int j=0;j<number;j++)
        cout<<input[j]<<endl;

}
