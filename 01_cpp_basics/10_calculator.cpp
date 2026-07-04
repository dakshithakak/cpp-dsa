//problem
//simple arithematic calculator

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a>>op>>b;
    if((op=='/' || op=='%')&&b==0){
        cout<<"invalid";
    }

    switch (op)
    {
    case '+':
        cout<<a+b;
        break;

    case '-':
        cout<<a-b;
        break;

    case '*':
        cout<<a*b;
        break;

    case '%':
        cout<<a%b;
        break;

    case '/':
    cout<<a/b;
        break;
        
    default:
    cout<<"invalid";
    }
    return 0;
}