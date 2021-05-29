//Greatest of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two numbers";

    cin>>a;
    cin>>b;

    c= a>b?a:b;
    cout<<c<<" is greatest";
