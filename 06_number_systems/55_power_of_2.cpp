//probelem
//Given a positive integer N, find the smallest power of 2 that is greater than or equal to N

#include<iostream>
using namespace std;
int two(int n){
    int ans=1,digit;
    while(ans<n){
        ans*=2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<two(n);
    return 0;
}