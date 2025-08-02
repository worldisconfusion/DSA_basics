//referece variable
#include <bits/stdc++.h>
using namespace std;

int main(){
int n=5;
int& k=n;//reference variable referring to n
int& c=n;//reference variable referring to n
cout<<n<<endl;
cout<<k<<endl;
cout<<c<<endl;
k++;
cout<<n<<endl;
cout<<k<<endl;
cout<<c<<endl;
//int& t =6; // wrong a reference variable stores address
return 0;
}