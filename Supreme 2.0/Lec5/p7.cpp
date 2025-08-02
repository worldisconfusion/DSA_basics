#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    //upper half

   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n + 1; j++)
        {
            if (j >= n - i  && j<= n+i)
                cout << " ";
             else
                cout << "*";
        }
        cout << "\n";
    }

//lower half

   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n + 1 ; j++)
        {
            if (j <= i || j>= 2*n-i)
                cout << "*";
             else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}