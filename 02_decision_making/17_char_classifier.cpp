//problem
//determine whether it is: uppercase,lowercase,digit or a special character

#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a<='Z' && a>='A'){
        cout<<"upper case";
    }
    else if(a<='z' && a>='a'){
        cout<<"lower case";
    }
    else if(a<='9' && a>='0'){
        cout<<"digit";
    }
    else{
        cout<<"speacial character";
    }
    return 0;
}