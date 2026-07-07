//problem
//Given two binary numbers, print their sum as a binary number

#include<iostream>
using namespace std;
int addition(int a,int b){
int bit1,bit2,carry=0,place=1,ans=0,digit,total;
while(a!=0 || b!=0 || carry!=0){
    bit1=a%10;
    bit2=b%10;
    total=bit1+bit2+carry;
    digit=total%2;
    carry=digit/2;
    ans=ans+digit*place;
    a/=10;
    b/=10;
    place*=10;
}
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<addition(a,b);
    return 0;
}