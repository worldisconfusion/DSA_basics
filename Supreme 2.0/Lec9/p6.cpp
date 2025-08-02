//sum of all numbers 1 to N
#include<bits/stdc++.h>
using namespace std;
int sumof1toN(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int N;
    cin>>N;
    cout<<sumof1toN(N);
    return 0;
}