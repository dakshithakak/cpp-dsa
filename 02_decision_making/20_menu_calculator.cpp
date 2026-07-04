//problem
//performs arithematic operations based on the user's choice

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>c>>a>>b;
    if(c>5){
        cout<<"Invalid";
    }
    if((c==4 || c==5) && b==0){
        cout<<"invalid";
    }
    else{
    switch(c){
        case(1):
            cout<<a+b;
            break;
        case(2):
            cout<<a-b;
            break;
        case(3):
            cout<<a*b;
            break;
        case(4):
            cout<<a/b;
            break;
        case(5):
            cout<<a%b;
            break;
    }
    }
}