//problem
//Write a function that accepts two integers and returns the larger of the two

#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<< min(a,b);
    return 0;
}