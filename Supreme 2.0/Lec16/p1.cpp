//Binary Search
//Array Must Be Sorted
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int brr[11]={1,2,3,4,5,6,7,8,9,10,11};
  int l=0,r=9;
  int target,mid;
  cin>>target;
  for(;l<r;){
    mid=l+(r-l)/2;
    if(target==arr[mid]){
        cout<<"Target Found!!"<<"\n Index :"<<mid+1;
        return 0;
    }
    else if (target>mid)
        l=mid+1;
        else
        r=mid-1;
    
  }
  cout<<"Target Not Found!!";
  return 0;
}