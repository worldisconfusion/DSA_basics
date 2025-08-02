//sum of all even numbers 1 to N
#include<bits/stdc++.h>
using namespace std;
int sumofeven1toN(int N){
    int sum=0;
    for(int i=2;i<=N;i=i+2){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int N;
    cin>>N;
    cout<<sumofeven1toN(N);
    return 0;
}