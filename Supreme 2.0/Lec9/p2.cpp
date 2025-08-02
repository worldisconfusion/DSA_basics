//max 0f 3 no.s
#include<bits/stdc++.h>
using namespace std;
void maxofthreenum(int a,int b , int c){
    cout<<(a>b?a>c?a:c:b>c?b:c);//cout<<max(max(a,b),c);
    return;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    maxofthreenum(a,b,c);
    return 0;
}