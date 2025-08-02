//WAP to convert farhenheit to celsius
#include<bits/stdc++.h>
using namespace std;
double farhenheittocelsius(double f){
    return((f-32.0) * (5/9.0));
}
int main(){
    double f;
    cin>>f;
    double c=farhenheittocelsius(f);
    cout<<c;
    return 0;
}