//problem
//Given a non-negative integer N, calculate and print the sum of all its digits

#include<iostream>
using namespace std;
int main(){
    int n,sum=0,d;
    cin>>n;
    while(n!=0){
        d=n%10;
        sum+=d;
        n/=10;
    }
    cout<<sum;
    return 0;
}