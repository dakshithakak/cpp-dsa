//problem
//Given a non-negative integer N, determine whether it is a Strong Number

#include<iostream>
using namespace std;
int fact(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
    return fact;
}
int strong(int n){
    int digit,ans=0;
    while(n!=0){
        digit=n%10;
        ans+=fact(digit);
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    if(strong(n)==n){
        cout<<"Strong number";
    }
    else{
        cout<<"Not a Strong number";
    }
    return 0;
}