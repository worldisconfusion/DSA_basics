#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n- i; j++)
        {
               if(i>=1&& j>=1&& j<=n-i-2)
               cout<<" ";
               else
               cout<<"*";
        }
           
        cout << "\n";
    }

    return 0;
}