//problem
//Write a function that returns the Greatest Common Divisor (GCD) of two positive integers

#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    int gcd=1;
    int n=min(a,b);
    for(int i=1;i<=n;i++){
        if((a%i==0) && (b%i==0)){
            gcd=i;
        }
        else{
            continue;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}