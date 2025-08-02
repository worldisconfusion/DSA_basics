// 4 sum like 3 sum

#include <bits/stdc++.h>
using namespace std;

// brute force finding all the quads

// vector<vector<int>> foursum(int a[], int n, int target)
// {

//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 for (int l = k + 1; l < n; l++)
//                 {
//                     if (a[k] + a[j] + a[i] + a[l] == target)
//                     {
//                         vector<int> temp = {a[l], a[k], a[j], a[i]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// using hashing or hashset

// vector<vector<int>> foursum(int a[], int n, int target)
// {

//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {
//         set<long long> hashset;
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 long long sum = a[i];
//                     sum+= a[j];
//                     sum+= a[k];
//                 long long fourth = target - sum;
//                 if (hashset.find(fourth) != hashset.end())
//                 {
//                     vector<int> temp = {(int)fourth, a[k], a[j], a[i]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(a[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// using two pointer approach

vector<vector<int>> foursum(int a[], int n, int target)
{
    vector<vector<int>> ans;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && a[j] == a[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                if (a[i] + a[j] + a[k] + a[l] < target)
                    k++;
                else if (a[i] + a[j] + a[k] + a[l] > target)
                    l--;
                else
                {
                    ans.push_back({a[i], a[j], a[k], a[l]});
                    k++;
                    l--;
                    while (k < l && a[k] == a[k - 1])
                        k++;
                    while (k < l && a[l] == a[l + 1])
                        l--;
                }
            }
        }
    }

    return ans;
}

int main()
{
    int a[14];
    int target;
    cin >> target;
    for (int i = 0; i < 14; i++)
        cin >> a[i];

    vector<vector<int>> ans = foursum(a, 14, target);

    cout << "Quads with target sum :" << endl;
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
        cout << "No Quads with target sum found." << endl;
    }

    return 0;
}