#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;


   for (int i = 0; i <n; i++)
    {  int k=0;
        for (int j = 0; j <n+i; j++){
            if(j>=n-i-1 && j<=n-1){
                ++k;
                cout<<k;  
            }
            else if(j>n-1){
                --k;
                cout<<k;
            }
            else
            cout<<" ";
        }

        cout <<"\n";
    }
    
    
    return 0;
}