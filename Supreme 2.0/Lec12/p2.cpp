// increment a number
#include <bits/stdc++.h>
using namespace std;
int incrementby1usingpassbyvalue(int k){ //pass by value
    return ++k ;
}
// void incrementby1usingpassbyreference(int *k){ //pass by reference
//     (*k)++;//*k++ would be wrong as it only increments the pointer, not the value.
//     return;
// }
void incrementby1usingpassbyreference(int &p){ //pass by reference
    p++;
    return;
}

int main(){
  int k;
  cin>>k;
  k= incrementby1usingpassbyvalue(k);
  cout<<k<<endl;
//   incrementby1usingpassbyreference(&k);
  incrementby1usingpassbyreference(k);
  cout<<k<<endl;
  return 0;
}