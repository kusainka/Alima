#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int days;
    double ps,sum;
    cin>>days>>ps>>sum;
    ps=ps/100;
    for(int i=0;i<days;i++){
        sum+=3;
        sum=sum*ps;
    }
    cout<<sum;
}
