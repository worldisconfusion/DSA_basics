//extreme print in an array 
//Example array: 1,2,3,4,5,6 
//Output:1,6,2,5,3,4
#include <bits/stdc++.h>
using namespace std;
void extremeprint(int arr[],int size){
for(int i=0;i<size/2;i++)
cout<<arr[i]<<" "<<arr[size-1-i]<<" ";
// for(int left=0,right=size-1;left<right;left++,right--)
// cout<<arr[left]<<" "<<arr[right]<<" ";
if(size%2)
cout<<arr[size/2];
return;
}
int main(){
  int arr[10];
  for(int i=0;i<10;i++)
  cin>>arr[i];
  extremeprint(arr,10);
  return 0;
}