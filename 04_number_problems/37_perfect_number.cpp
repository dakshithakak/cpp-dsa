//problem
//Given a positive integer N, determine whether it is a Perfect Number

#include<iostream>
using namespace std;
int perfect(int n){
    int sum=1;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    if(perfect(n)==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not perfect";
    }
    return 0;
}