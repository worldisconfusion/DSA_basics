// triplet sum problem -- target sum zero and all the triplets are unique no rearrangement/reordering of triplets is considered

#include <bits/stdc++.h>
using namespace std;

// brute force finding all the triplets

// vector<vector<int>>tripletsum(int a[], int n)
// {

//   set<vector<int>>st;
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//       for(int k=j+1; k<n;k++){
//         if(a[k]+a[j]+a[i]==0){
//           vector<int>temp={a[k],a[j],a[i]};
//           sort(temp.begin(),temp.end());
//           st.insert(temp);
//         }
//       }
//     }
//   }
//   vector<vector<int>> ans(st.begin(),st.end());
//   return ans;
// }

// using hashing or hashset
//  vector<vector<int>> tripletsum(int a[], int n)
//  {

//   set<vector<int>> st;
//   for (int i = 0; i < n; i++)
//   {
//     set<int> hashset;
//     for (int j = i + 1; j < n; j++)
//     {
//       int third = -(a[i] + a[j]);
//       if (hashset.find(third) != hashset.end())
//       {
//         vector<int> temp = {third, a[j], a[i]};
//         sort(temp.begin(), temp.end());
//         st.insert(temp);
//       }
//       hashset.insert(a[j]);
//     }
//   }
//   vector<vector<int>> ans(st.begin(), st.end());
//   return ans;
// }

// using two pointer approach
vector<vector<int>> tripletsum(int a[], int n)
{
  vector<vector<int>> ans;
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    if (i > 0 && a[i] == a[i - 1])
      continue;
    int j = i + 1;
    int k = n - 1;
    while (j < k)
    {
      if (a[i] + a[j] + a[k] < 0)
        j++;
      else if (a[i] + a[j] + a[k] > 0)
        k--;
      else
      {
        ans.push_back({a[i], a[j], a[k]});
        j++;
        k--;
        while (j < k && a[j] == a[j - 1])
          j++;
        while (j < k && a[k] == a[k + 1])
          k--;
      }
    }
  }

  return ans;
}

int main()
{
  int a[13];
  for (int i = 0; i < 13; i++)
    cin >> a[i];

  vector<vector<int>> ans = tripletsum(a, 13);

  cout << "Triplets with sum zero:" << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << "[";
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j];
      if (j < ans[i].size() - 1)
        cout << ", ";
    }
    cout << "]" << endl;
  }

  if (ans.empty())
  {
    cout << "No triplets found with sum zero." << endl;
  }

  return 0;
}