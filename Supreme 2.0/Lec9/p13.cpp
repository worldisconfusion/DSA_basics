//WAP to print binary repesentation of a decimal number
//NOTE:to avoid overflow of digits as in this case till 99 number the answer is correct, use string
#include <bits/stdc++.h>
using namespace std;
//APPROACH USING STRING
// void decimaltobinary(int n) {
//     if (n == 0) {
//         cout << 0;
//         return;
//     }
//     string res = "";
//     while (n > 0) {
//         int bit = n & 1;
//         res = char('0' + bit) + res;//concatenate the character of Least Significant Bit Obtained
//         n = n >> 1;
//     }
//     cout << res;
// }
void decimaltobinary(int n){
long long int res=0;
int bit;
for(int i=0;n>0;i++){
 bit=n&1;
 res=res+bit*pow(10,i);
 n=n>>1;
}
cout<<res;
return;
}
int main(){
    int n;
    cin>>n;
    decimaltobinary(n);
    return 0;
}