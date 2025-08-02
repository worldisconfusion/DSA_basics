//reverse an array
#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
    return;
}
void reversearr(int arr[],int size){
for(int i=0;i<size/2;i++)
swap(&arr[i],&arr[size-1-i]);
// for(int left=0,right=size-1;left<right;left++,right--)
// swap(arr[left],arr[right]);
return;
}
int main(){
  int arr[10];
  for(int i=0;i<10;i++)
  cin>>arr[i];
  reversearr(arr,10);
  for(int i=0;i<10;i++)
  cout<<arr[i]<<" ";
  return 0;
}