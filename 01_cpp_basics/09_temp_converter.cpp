//problem
//convert degrees Celsius to degrees Fahrenheit

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int c;
    float f;
    cin>>c;
    f=((9*c)/5)+32;
    cout << fixed << setprecision(2) << f;
    return 0;
}