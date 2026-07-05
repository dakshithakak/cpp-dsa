//problem
//Given a non-negative integer N, determine whether it is a palindrome

#include<iostream>
using namespace std;
int rev(int n){
    int digit,ans=0;
    while(n!=0){
        digit=n%10;
        ans=ans*10+digit;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    if(rev(n)==n){
        cout<<"palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}