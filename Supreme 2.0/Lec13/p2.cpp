//print all pairs of 2 possible in an array
#include <bits/stdc++.h>
using namespace std;
void printpairs(int a[],int size){
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<"("<<a[j]<<" , "<<a[i]<<")"<<endl;}}
        return;
}
int main(){
int a[5];
for(int i=0;i<5;i++)
cin>>a[i];
printpairs(a,5);
return 0;
}