#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;


   for (int i = 0; i <n; i++)
    {  int k=0;
        for (int j = 0; j <4*n-3; j++){
            if(j>=2*n-i-2 && j<=2*n+i-2 )
                (i+j)%2==0?cout<<i+1:cout<<"*";  
            else
            cout<<"*";
        }

        cout <<"\n";
    }
    
    
    return 0;
}