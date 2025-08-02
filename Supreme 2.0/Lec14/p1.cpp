#include <bits/stdc++.h>

using namespace std;

void fun(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;//cout<<arr.at(i)<<endl;
  }
  return ;
}

void fun(vector<int> arr, int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }


  //For Each Loop
  //Printing using iterator
  // for(auto it: arr){
  //   cout<<it<<endl;
  // }
  return ;
}


int main(){
  //static memory allocation
  // int arr[5]={1,2,3,4,5};
  // fun(arr,5);
  

  //dynamic memory allocation
  // int n;
  // cin>>n;
  // int* arr = new int[n];
  // for(int i=0;i<n;i++){
  //   cin>>*(arr+i);//each element is either zero or garbage value
  // }
  // arr[n]=20;//wrong as the last address allocated is arr[n-1]  solution for this is using vector instead
  // fun(arr,n);

  //vector implemenation

  vector<int>arr;
  int n,temp;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>temp;
    arr.push_back(temp);
  }
  arr.push_back(20);
  fun(arr,n);
  return 0;
}