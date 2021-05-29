//Greatest of three numbers
#include <iostream>
using namespace std;

int great(int a, int b, int c){
    if (a>b && a>c)
        cout<<a<<" is greatest";

    if (b>c && b>a)
        cout<<b<<" is greatest";

    if (c>a && c>b)
        cout<<c<<" is greatest";
    return 0;
}

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers";
    cin>>a>>b>>c;
    great(a, b, c);
    return 0;
}