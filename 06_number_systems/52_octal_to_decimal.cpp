//problem
//Given an octal number, convert it to its decimal equivalent

#include<iostream>
using namespace std;
int decimal(int n){
    int ans=0,place=1,digit;
    while(n!=0){
        digit=n%10;
        ans+=n%10*place;
        place*=8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimal(n);
    return 0;
}