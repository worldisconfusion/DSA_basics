#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    //upper half

   for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j < i; j++)
           
                cout <<i<< "*";
     
        cout <<i<< "\n";
    }
    
   //lower half
   for (int i = n-1; i >=1; i--)
    {
        for (int j = i-1; j >= 1; j--)
           
                cout <<i<< "*";
     
        cout <<i<< "\n";
    }


    return 0;
}