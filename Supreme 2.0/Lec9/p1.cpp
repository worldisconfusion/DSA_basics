//WAP to print sum of 3 no.s
#include <bits/stdc++.h>
using namespace std;
int printsum(int d,int e,int f);// int printsum(int,int,int);
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int sum= printsum(num1,num2,num3);
    cout<<sum;
    return 0;
}
int printsum(int a,int b, int c){
    return a+b+c;
}