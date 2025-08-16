//divide two numbers without using division
#include <bits/stdc++.h>
using namespace std;

int main(){
  int dividend;//jisko divide karna hai
  int divisor;//jisse divide hoga
  cin>>dividend;
  cin>>divisor;
bool is_neg=((dividend>0)!=(divisor>0));
  dividend=abs(dividend);
  divisor=abs(divisor);
  int start=0;
  int ans=0;
  int end=dividend;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(mid*divisor<=dividend){
    ans = mid;
    start= mid+1;
    }
    else
    end=mid-1;
  }
  cout<<((is_neg)?(-1*ans):ans);
  return 0;
}
