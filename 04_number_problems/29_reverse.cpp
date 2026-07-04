//problem
//Given an integer N, reverse its digits and print the reversed number

#include<iostream>
using namespace std;
int main(){
    int n,ans=0,a;
    cin>>n;
    while(n!=0){
        a=n%10;
        ans=(ans)*10+a;
        n/=10;
    }
    cout<<ans;
}