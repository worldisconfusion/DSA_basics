//print all triplets in an array
#include <bits/stdc++.h>
using namespace std;
void printpairs(int a[],int size){
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
for(int k=0;k<size;k++){
cout<<"( "<<a[j]<<" , "<<a[i]<<" , "<<a[k]<<" )"<<endl;
    }
    }}
        return;
}
int main(){
int a[3];
for(int i=0;i<3;i++)
cin>>a[i];
printpairs(a,3);
return 0;
}