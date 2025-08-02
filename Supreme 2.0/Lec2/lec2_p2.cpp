#include <iostream>
using namespace std;
int main()
{
    int a =5;
    int b =10;
    cout << a+b <<endl;
    cout << a-b <<endl;
    cout << a*b <<endl;
    cout << b/a <<endl;
    cout << b%a <<endl;
    a =3;
    b =2;
    cout << a+b <<endl;
    cout << a-b <<endl;
    cout << a*b <<endl;
    cout << a/b <<endl;
    cout << b%a <<endl;
    cout << (a>=b) <<endl;
    cout << (a>b) <<endl;
    cout << (a<b) <<endl;
    cout << (a<=b) <<endl;
    cout << (b!=a) <<endl;
    cout << (a==b) <<endl;
    int age=15;
    int car=2;
    if(age>=18||car>=1)
    cout<<"license!!!"<<endl;
    if(age==3&&car==1)
    cout<<"license!!!"<<endl;
    cout<<!age<<endl;
    char ch=234112;
    cout<<ch;
    return 0;
}