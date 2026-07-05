//problem
//Given a non-negative integer N, determine whether it is a Neon Number

#include<iostream>
using namespace std;
int neon(int n){
    int digit,sum=0;
    while(n!=0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}
int main(){
    int n,p;
    cin>>n;
    p=n*n;
    if(neon(p)==n){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not a Neon Number";
    }
    return 0;
}