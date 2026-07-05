//problem
//Write a function that takes an integer N as input and returns its square

#include<iostream>
using namespace std;
int square(int n){
    
    return n*n;
}
int main(){
    int n;
    cin>>n;
    cout<<square(n);
    return 0;
}