//WAP to print all prime numbers from 1 to N
#include <bits/stdc++.h>
using namespace std;
bool isprime(int N){
    if(N==1)
    return false;//1 is niether prime nor composite number
for(int i=2;i<N;i++){
    if(N%i==0)
    return false;}
return true;
}
int main(){
    int N;
    cin>>N;
    for(int i=1;i<N;i++){
        if(isprime(i))
        cout<<i<<endl;
    }
    return 0;
}