//WAP to find factorial of a number
#include <bits/stdc++.h>
using namespace std;
long long int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
