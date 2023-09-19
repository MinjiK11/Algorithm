#include <iostream>

using namespace std;

int gcdInter(int a, int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

int gcmInter(int a, int b, int gcd){
    int n1 = a/gcd;
    int n2 = b/gcd;

    return gcd * n1 * n2;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;

    int gcd=gcdInter(n1, n2);
    int gcm=gcmInter(n1, n2, gcd);

    cout<<gcd<<'\n'<<gcm;

}