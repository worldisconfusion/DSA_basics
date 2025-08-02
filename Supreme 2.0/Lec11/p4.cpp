//linear search
#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[5],target;
for(int i=0;i<5;i++)
cin>>arr[i];
cin>>target;
for(int i=0;i<5;i++)
if(arr[i]==target){
cout<<"found at index: "<<i+1;
return 0;}
cout<<"not found !";
return 0;
}