//shift array elements right by 1
#include <bits/stdc++.h>
using namespace std;


void shiftrightby1(int arr[],int size){
    int temp=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    return;
}


int main(){
int a[10];
for(int i=0;i<10;i++)
cin>>a[i];
shiftrightby1(a,10);
for(int i=0;i<10;i++)
cout<<a[i];
return 0;
}