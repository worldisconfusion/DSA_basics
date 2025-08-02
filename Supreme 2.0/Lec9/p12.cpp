//WAP to create a number using digits
//NOTE: enter 0 for false and 1 for true for cin type statement in C++ for bool type of variable
#include <bits/stdc++.h>
using namespace std;
long long int createanumberusingdigits(int digits,bool flag){
long long int n=0;
int temp;
cout<<"Enter the digits one by one : ";
for(int i=1;i<=digits;i++){
 cin>>temp;
 n=n*10+temp;
}
if(!flag)
n*=-1;
return n;
}
int main(){
    int digits;
    long long int n;
    bool posORnegFlag=true;
    cout<<"Enter sign of the number i.e.  1 for positive number 0 for negitive number : ";
    cin>>posORnegFlag;// 1 for positive number 0 for negitive number
    cout<<"Enter the number of digits : ";
    cin>>digits;
    n=createanumberusingdigits(digits,posORnegFlag);
    cout<<"The number is : "<<n;
    return 0;
}