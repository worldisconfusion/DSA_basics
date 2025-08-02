#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=5;
    int arr[10];
    cout<<&a<<endl;
    cout<<&arr<<endl; 
    cout<<arr<<endl;// same as cout<<&arr; 
    cout<<"Size of a: "<<sizeof(a)<<endl;
    cout<<"Size of arr: "<<sizeof(arr)<<endl;
  return 0;
}