//problem
//Given a non-negative integer N, determine whether it is an Armstrong number

#include<iostream>
#include<cmath>
using namespace std;
int count(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
} 

int arm(int n){
    int c=count(n),ans=0,digit;
    while(n!=0){
        digit=n%10;
        ans=ans+round(pow(digit,c));
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    if(arm(n)==n){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}