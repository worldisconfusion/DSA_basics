// two sum problem --- return index of the values whose sum is equal to target sum
#include <bits/stdc++.h>
using namespace std;

// using map
//  void twosum(int a[], int n, int size){
//       map <int,int> mp;
//       for(int i=0;i<size;i++){
//          if(mp.find(n-a[i])!=mp.end()){
//          cout<<i<<" "<<mp[n-a[i]];
//          return;
//          }
//          else
//          mp[a[i]]=i;
//       }
//       cout<<"Not found!!";
//  return;
//  }

// using two pointers
void twosum(int a[], int n, int size)
{
    sort(a, a + size);
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (a[left] + a[right] < n)
            left++;
        else if (a[left] + a[right] > n)
            right--;
        else
        {
            cout << left << " " << right;
            return;
        }
    }
    cout << "Not found!!";
    return;
}
int main()
{
    int a[10];
    int n;
    cin >> n;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    twosum(a, n, 10);
    return 0;
}