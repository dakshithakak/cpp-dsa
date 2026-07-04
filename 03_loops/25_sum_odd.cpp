//problem
//print the sum of all odd numbers from 1 to N

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i&1){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}