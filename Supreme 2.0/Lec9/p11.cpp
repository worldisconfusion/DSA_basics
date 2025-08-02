//WAP to print all digits of an integer
#include <bits/stdc++.h>
using namespace std;
void printalldigitsofaninteger(long long int n){
if(n<0)
n*=-1;
if(n==0){
    cout<<0;
    return;
}
while(n>0){
    cout<<n%10<<endl;
    n=n/10;
}
return;
}
int main(){
    long long int n;
    cin>>n;
printalldigitsofaninteger(n);
    return 0;
}