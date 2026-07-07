//problem
//Given a binary number, convert it to its decimal equivalent

#include<iostream>
using namespace std;
int decimal(int n){
    int place=1,digit,ans=0;
    while(n!=0){
        digit=n%10;
        ans+=digit*place;
        place*=2;
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