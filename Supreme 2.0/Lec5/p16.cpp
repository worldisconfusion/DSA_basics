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
        for (int j = 0; j <=i; j++)
        cout <<"*";

        cout <<"\n";
    }
    
   //lower half
   for (int i = 1; i <n; i++)
    {
        for (int j = 0; j < n-i; j++)
           
                cout <<"*";
     
        cout << "\n";
    }


    return 0;
}