//problem
//Given a non-negative decimal integer N convert it to its binary representation 

#include<iostream>
using namespace std;
int binary(int n){
    int digit,ans=0,place=1;
    while(n!=0){
        digit=n%2*place;
        ans+=digit;
        n/=2;
        place*=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binary(n);
    return 0;
}