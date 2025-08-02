#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    //upper half

   for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <2*n; j++){
            if(j<=i || j>=2*n-i-1)
            cout<<"*";
            else
            cout<<" ";
        }

        cout <<"\n";
    }
    
   //lower half

   for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j <2*n; j++){
            if(j<n-1-i || j>n+i)
            cout<<"*";
            else
            cout<<" ";
        }

        cout <<"\n";
    }
    
    return 0;
}