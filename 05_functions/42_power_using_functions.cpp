//problem
//Write a function that returns the value of N raised to the power P (i.e., N^P) 

#include<iostream>
using namespace std;
int power(int n,int p){
    int a=1;
    if(p==0){
        return 1;
    }
    else{
        for(int i=1;i<=p;i++){
            a*=n;
        }
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}