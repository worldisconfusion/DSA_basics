// sort -ve and +ve elements of an array two left and right sides
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter the elements: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    int i = 0, j = 0;
    while (j < 10)
    {
        if(arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    cout<<"Separated Array: ";
    for (int i = 0; i < 10; i++)
        cout<< arr[i]<<" ";
    return 0;
}