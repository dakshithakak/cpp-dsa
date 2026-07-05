//problem
//Write a function that determines whether a given positive integer is prime

#include<iostream>
using namespace std;
int prime(int a){
    if(a<=1){
        return false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cin>>a;
    if(prime(a)){
        cout<<"prime";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}