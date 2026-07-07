//problem
//Given a non-negative decimal integer N, convert it to its octal representation

#include<iostream>
using namespace std;
int octal(int n){
    int place=1,ans=0,digit;
    while(n!=0){
        digit=n%8*place;
        ans+=digit;
        place*=10;
        n/=8;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<octal(n);
    return 0;
}