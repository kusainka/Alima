#include<iostream>
using namespace std;
int main(){
    int weeks,months,years;
    cin>>weeks>>months>>years;
    cout<<(weeks*7)+(months*30)+(years*12*30);
}
