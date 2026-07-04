//problem
//Alphabet Case Converter

#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(isupper(a)){
        cout<<char(tolower(a));
    }
    else if(islower(a)){
        cout<<char(toupper(a));
    }
    else{
        cout<<"Invalid";
    }

    return 0;
}