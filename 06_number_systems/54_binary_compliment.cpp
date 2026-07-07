//problem
//Given a binary number, flip every bit

#include<iostream>
using namespace std;
int compliment(int n){
    int digit,ans=0,place=1;
    if (n==0){
        return 1;
    }
    while(n!=0){
        digit=n%10;
        if(digit!=1 && digit!=0){
            cout<<"invalid";
            return -1;
        }
        digit=1-digit;
        ans=ans+digit*place;
        place*=10;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<compliment(n);
    return 0;
}