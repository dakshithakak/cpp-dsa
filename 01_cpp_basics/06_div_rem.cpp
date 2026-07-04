//problem
//Given two integers A and B, print quotient and remainder after division

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b!=0){
        cout<<a/b<<endl<<a%b;
    }
    else{
        cout<<"invalid";
    }
    return 0;
}