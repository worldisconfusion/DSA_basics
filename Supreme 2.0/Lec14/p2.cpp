#include <bits/stdc++.h>
using namespace std;

int main(){

//vector initialization

vector<int> arr;//default wih no data zero size

vector<int> arr2(5,-1);//initialize with 5 elements having value -1

// cout<<"Capacity: "<<arr2.capacity()<<" Size: "<<arr2.size()<<endl;
// Output:
// Capacity: 5 Size: 5


vector<int>arr3={1,2,3,4,5};//initialize vector with 1,2,3,4,5 first five elements and their values

vector<int>arr4{1,2,3,4,5};//initialize vector with 1,2,3,4,5 first five elements and their values


//Copying a vector
vector<int>arr5(arr4);

//accessing vector front element
cout<<arr[0]; // or cout<<arr.front();

//accessing vector back element
cout<<arr[arr.size()-1]; // or cout<<arr.back();

while(true){
    int temp;
    cin>>temp;
    arr.push_back(temp);
    cout<<"Capacity: "<<arr.capacity()<<" Size: "<<arr.size()<<endl;
    // if(temp==5)
    // break;
}

// for(int i=0;i<5;i++){
//     arr.pop_back();
//     cout<<"Capacity: "<<arr.capacity()<<" Size: "<<arr.size()<<endl;
// }

//Output:
// Capacity: 8 Size: 5
// Capacity: 8 Size: 4
// Capacity: 8 Size: 3
// Capacity: 8 Size: 2
// Capacity: 8 Size: 1
// Capacity: 8 Size: 0


//clear all the elements in vector

// arr.clear();
// cout<<"Capacity: "<<arr.capacity()<<" Size: "<<arr.size()<<endl;

//Output:
// Capacity: 8 Size: 0

  return 0;
}
//Output:
// 5
// Capacity: 1 Size: 1
// 6
// Capacity: 2 Size: 2
// 7
// Capacity: 4 Size: 3
// 8
// Capacity: 4 Size: 4
// 9
// Capacity: 8 Size: 5
// 10
