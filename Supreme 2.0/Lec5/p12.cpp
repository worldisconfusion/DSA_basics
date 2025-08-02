#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
   for (int i = 1; i <=n; i++)
    { int k=-1;
        for (int j = 0; j <2*i-1; j++)
        {
               if(j <i){
                ++k;
                cout<<char(65+k);
               }
               
               else{
                --k;
               cout<<char(65+k);
               }

        }
           
        cout << "\n";
    }

    return 0;
}