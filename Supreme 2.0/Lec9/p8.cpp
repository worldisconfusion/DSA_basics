//WAP to find area of a circle
#include <bits/stdc++.h>
using namespace std;
double areaofcircle(double r){
    return M_PI*r*r;
}
int main()
{
    double r;
    cin>>r;
    cout<<areaofcircle(r);
    return 0;
}
