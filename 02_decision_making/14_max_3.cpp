//problem
//Given three integers, determine the largest among them

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b) && (b==c)){
        cout<<"Equal";
    }
    else{
    cout<<max(a,max(b,c));
    }
    return 0;

}