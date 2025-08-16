//bubble sort -increasing order

#include <bits/stdc++.h>
using namespace std;
void swap(int * a, int *b){
    int temp=*a;
    *a= *b;
    *b= temp;
    return;
}
void bubblesort(vector<int>& arr){
for(int i=0;i<arr.size()-1;i++){
    int flag=0;
    for(int j=0;j<arr.size()-i-1;j++){
        if(arr[j]>arr[j+1]){
        flag=1;
        swap(&arr[j],&arr[j+1]);
        }
    }
    if(flag==0)
    break;
  } 
  return;   
}
int main(){
  vector<int>arr={5,3,0,-1,33,56,4};
  bubblesort(arr);
  for(auto i: arr)
   cout<<i<<" ";
  return 0;
}