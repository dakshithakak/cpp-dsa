//problem
//given 2 integers, print the larger integer 

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Equal";
    }
    else {
        cout<<(a<b?b:a);
    }
    return 0;
}