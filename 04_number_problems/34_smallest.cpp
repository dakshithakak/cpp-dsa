//problem
//Given a non-negative integer N, determine the smallest digit present in it

#include<iostream>
using namespace std;
int main(){
    int n,d,smallest=9;
    cin>>n;
    while(n!=0){
        d=n%10;
        if(d==0){
            smallest=0;
            break;
        }
        else if(d<smallest){
            smallest=d;
        }
        n/=10;
    }
    cout<<smallest;
    return 0;
}