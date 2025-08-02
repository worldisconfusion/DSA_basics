//min num in an array
#include <bits/stdc++.h>
using namespace std;
int findmin(int arr[],int size){
int min=INT_MAX;
for(int i=0;i<size;i++)
if(arr[i]<min)//min=min(min,arr[i]);
min=arr[i];
return min;
}
int main(){
  int arr[10];
  for(int i=0;i<10;i++)
  cin>>arr[i];
  cout<<"Min : "<<findmin(arr,10);
  return 0;
}