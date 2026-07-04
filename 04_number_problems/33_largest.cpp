//problem
//Given a non-negative integer N, determine the largest digit present in it

#include<iostream>
using namespace std;
int main(){
    long long n,largest=0,d;
    cin>>n;
    while(n!=0){
        d=n%10;
        if(d>largest){
            largest=d;
        }
        n/=10;
    }
    cout<<largest;
    return 0;
}