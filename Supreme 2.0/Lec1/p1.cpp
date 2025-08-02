#include "p2.h"
#include<iostream>
using namespace std;

void funfrom1(){
    cout<<"Hello 1";
}
int main(){
    funfrom1();
    funfrom2();
    return 0;
}
//if we try to execute p1.cpp(p1.out) it will not run but we can create object file p1.o using g++ -c p1.cpp
//after forming object file which is just symbols/object code translated from actual code we have to form an executable of both p1.cpp and p2.cp together
//use g++ p1.o p2.o 
//you can also use g++ p1.o p2.o -o filename like result  for customizing executable file name
// finally run by ./a