//WAP to check even or odd using bitwise operator
#include <bits/stdc++.h>
using namespace std;
bool evenoddbitwise(int n){
return n&1;
}
int main(){
    int n;
    cin>>n;
    if( evenoddbitwise(n))
    cout<<"ODD";
    else
    cout<<"EVEN";
    return 0;
}