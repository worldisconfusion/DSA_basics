#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
   for (int i = 1; i <=n; i++)
    { cout<<1;
        for (int j = 1; j <= i; j++)
        {
               if(j < i && i!=n)
               cout<<" ";
               else if (i==n && j!=1)
               cout<<j;
               else if(i!=1 && i!=n)
               cout<<i;
        }
           
        cout << "\n";
    }

    return 0;
}