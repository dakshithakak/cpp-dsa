//problem
//leap year checker 

#include<iostream>
using namespace std;
int main(){
    int Y;
    cin>>Y;
    if(Y%400==0){
        cout<<"Leap Year";
        }
    else if(Y%100==0){
        cout<<"Not a Leap Year";
    }
    else if(Y%4==0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
    return 0;
}