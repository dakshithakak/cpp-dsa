//problem
//Given a non-negative integer N, determine whether it is an Automorphic Number

#include<iostream>
using namespace std;
int lastdigit(int n){
    int d;
    d=n%10;
    return d;
}

int main(){
    int n,s;
    cin>>n;
    s=n*n;
    if(lastdigit(n)==lastdigit(s)){
        cout<<"Atutomorphic Number";
    }
    else{
        cout<<"Not Automorphic Number";
    }
    return 0;
}