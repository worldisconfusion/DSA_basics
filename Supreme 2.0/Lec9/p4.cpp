//check prime or not 
#include<bits/stdc++.h>
using namespace std;
void isprime(int n){
    cout<<n<<" is ";
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {cout<<"not a prime number";
            return;
    }
}
cout<<"a prime number";
return;
}
int main(){
    int n;
    cin>>n;
    isprime(n);
    return 0;
}