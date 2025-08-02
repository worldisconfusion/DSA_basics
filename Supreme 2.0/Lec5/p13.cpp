#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
   for (int i = 1; i <=n; i++)
    { int k=-1;
        for (int j = i; j <=n; j++)
        {
               if(i==1|| j==i|| j==n)
                cout<<j;
               else
               cout<<" ";
        }
           
        cout << "\n";
    }

    return 0;
}