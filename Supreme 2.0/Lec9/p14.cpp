//WAP To convert miles to kilometers
#include<bits/stdc++.h>
using namespace std;
double kmtomiles(double km){
    return (km*0.621371);
}
int main(){
    double km;
    cin>>km;
    cout<<kmtomiles(km);
    return 0;
}