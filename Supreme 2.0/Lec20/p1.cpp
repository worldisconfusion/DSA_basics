//insertion sort --left side is sorted find the place of first right element on left side
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a= *b;
    *b= temp;
    return;
}

void insertionsort(vector<int>&arr){
for(int i=1;i<arr.size();i++){
int key=arr[i];
int j = i - 1;
for(;j >= 0 && arr[j] > key;j--) 
arr[j + 1] = arr[j];
if(key!=arr[j+1])
arr[j + 1] = key;
}
return;
}

int main(){
  vector<int>arr={44,33,55,22,11};
  insertionsort(arr);
  for(auto i: arr)
   cout<<i<<" ";
  return 0;
}