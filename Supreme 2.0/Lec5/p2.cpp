#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-1-i; j++)
        {
            if (j < i)
                cout << " ";
            else if (!(( i + j) % 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    //OR
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n ; j++)
    //     {
    //         if (j < i)
    //             cout << " ";
    //         else 
    //             cout << "* ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}