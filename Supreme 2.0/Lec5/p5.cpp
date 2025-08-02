#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-1-i ; j++)
        {
            if (j == 2*n - i - 2 || j== i)
                cout << "*";
             else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}