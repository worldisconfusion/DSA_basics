//WAP to count all set bits of a number 
#include <bits/stdc++.h>
using namespace std;
int countsetbits(int n){
int count=0;
while(n>0){
    if(n&1)
    count++;
    n=n>>1;// just n>>1 doesn't works we have to write n=n>>1 unlike n++
}
return count;
}
int main(){
    int n;
    cin>>n;
    int count=countsetbits(n);
    cout<<count;
    return 0;
}