//problem
//determine whether positive negative zero

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Negetive";
    }
    else if(n==0){
        cout<<"Zero";
    }
    else{
        cout<<"Positive";
    }
    return 0;
}
