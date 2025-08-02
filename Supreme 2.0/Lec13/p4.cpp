// sort 0s and 1s
#include <bits/stdc++.h>
using namespace std;

//using 2 pointer approach

// void sort0and1(int a[], int size)
// {
//     int p0 = 0;//finds position to put next zero
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] == 0)
//             {swap(a[i], a[p0]);
//         p0++;}
//     }
//     return;
// }


//using counting of 0s and 1s

void sort0and1(int a[],int size){
    int cnt=0;
    for(int i=0;i<size;i++)
    if(!a[i])
    cnt++;
    for(int i=0;i<size;i++)
        if(i<cnt)
        a[i]=0;
        else
        a[i]=1;
    
    return;
}


int main()
{
int a[10];
for(int i=0;i<10;i++)
cin>>a[i];
sort0and1(a,10);
for(int i=0;i<10;i++)
cout<<a[i];
return 0;
}