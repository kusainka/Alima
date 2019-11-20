#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double e=2.71828;
    double x=3.6;
    cout<<(pow(e,x-2)+abs(sin(x))-pow(x,4)*cos(1/x));
}
