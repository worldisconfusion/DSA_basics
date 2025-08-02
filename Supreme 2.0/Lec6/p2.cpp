#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = -7;
    cout << (num>>1)<<endl;//compiler handles and gives correct value
    unsigned int unum=-7;
    cout<<(unum>>1)<<endl;//compiler cannot handle and gives positive large value like backend logic with bits
    cout<<(7<<-1)<<endl;//gives garbage value and warning but no error or the compiler may even handle it correctly
    cout<<(-7>>1);// same as 1st output as compiler treats it int by default
    return 0;
}