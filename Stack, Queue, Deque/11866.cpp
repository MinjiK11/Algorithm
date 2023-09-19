#include <iostream>
#include <queue>

using namespace std;

void createQueue(queue<int> &q,int n){
    for(int i=1;i<=n;i++){
        q.push(i);
    }
}
int main(){
    int n, k;
    cin>>n>>k;

    queue<int> circle;
    queue<int> result;

    createQueue(circle,n);

    while(circle.size()!=1){
        for(int i=1;i<k;i++){
            int temp=circle.front();
            circle.pop();
            circle.push(temp);
        }
        result.push(circle.front());
        circle.pop();
    }
    result.push(circle.front());

    cout<<'<';
    while(result.size()!=1){
        cout<<result.front()<<", ";
        result.pop();
    }
    cout<<result.front()<<'>';

}