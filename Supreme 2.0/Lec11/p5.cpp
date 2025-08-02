//linear search using function
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int size, int target){
for(int i=0;i<5;i++)
if(arr[i]==target){
cout<<"found at index: "<<i+1;
return ;}
cout<<"not found !";
return ;
}
int main(){
int arr[5],target;
for(int i=0;i<5;i++)
cin>>arr[i];
cin>>target;
solve(arr,5,target);
return 0;
}