//WAP to make an array of 10 elements and double it up
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[10];
  cout<<"Enter 10 elements: "<<endl;
  for(int i=0;i<10;i++)
  cin>>arr[i];
  for(int i=0;i<10;i++)
  arr[i]=2*arr[i];
  for(int i=0;i<10;i++)
  cout<<arr[i]<<" ";
  return 0;
}