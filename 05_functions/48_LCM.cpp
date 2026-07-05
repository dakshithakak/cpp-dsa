//problem
//Write a function that returns the Least Common Multiple of two positive integers

#include<iostream>
#include<algorithm>
using namespace std;
int lcm(int a,int b){
    int lcm=0;
    for(int i=max(a,b);i<=(a*b);i+=max(a,b)){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    return lcm;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}