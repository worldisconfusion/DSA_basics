//selection sort -select the ith smallest/largest element of the remaining array and insert it on the ith position
#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a= *b;
    *b= temp;
    return;
}
void selectionsort(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
        int temp=i;
        for(int j=i;j<arr.size();j++){
            if(arr[temp]>arr[j])
            temp=j;
        }
        if(i!=temp)//smallest and ith index are same so no swapping needed
        swap(&arr[i],&arr[temp]);
    }
    return;
}
int main(){
  vector<int>arr={44,33,55,22,11};
  selectionsort(arr);
  for(auto i: arr)
   cout<<i<<" ";
  return 0;
}