//find unique elements in an array i.e. every element occurs twice using XOR
#include <bits/stdc++.h>
using namespace std;
int findunique(int a[],int size){
    int unique=0; // as 0 xor 1 =1 and 0 xor 0 = 0 so 0 xor num =num
    for(int i=0;i<size;i++)
    unique^=a[i];
    return unique;
}
int main(){
int a[11];
for(int i=0;i<11;i++)
cin>>a[i];
cout<<findunique(a,11);
return 0;
}