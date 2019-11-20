#include<iostream>
using namespace std;
int main(){
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=a+b;
    y=c-a;
    z=a+b+c;
    a=x;
    b=y;
    c=z;
    cout<<a<<" "<<b<<" "<<c;
}
