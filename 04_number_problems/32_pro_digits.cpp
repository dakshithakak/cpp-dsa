//problem
//Given a non-negative integer N, calculate and print the product of all its digits

#include<iostream>
using namespace std;
int main(){
    int n,p=1,d;
    cin>>n;
    while(n!=0){
        d=n%10;
        p*=d;
        n/=10;
    }
    cout<<p;
    return 0;
}