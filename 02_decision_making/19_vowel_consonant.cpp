//problem
//determine whether character is a vowel or a consonant

#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(isupper(a)){
        a=tolower(a);
    }
    if(!isalpha(a)){
        cout<<"invalid";
    }

    else{
    if((a=='a') || (a=='e') || (a=='i') || (a=='o') || (a=='u')){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }}
    return 0;
}