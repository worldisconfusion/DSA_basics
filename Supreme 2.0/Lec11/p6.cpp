//count 0s and 1s in an array
#include <bits/stdc++.h>
using namespace std;
int zsum=0,osum=0;
void numofzerosandones(int arr[],int size){
for(int i=0;i<20;i++)
if(arr[i]==1)
osum++;
else if(arr[i]==0)
zsum++;
cout<<"No. of Zeros : "<<zsum<<endl;
cout<<"No. of Ones : "<<osum<<endl;
}
int main(){
int arr[20];
for(int i=0;i<20;i++)
cin>>arr[i];
numofzerosandones(arr,20);
return 0;
}