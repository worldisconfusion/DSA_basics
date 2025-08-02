// dutch national flag algorithm or sort 0s 1s and 2s
#include <bits/stdc++.h>
using namespace std;

// dutch national flag algorithm

void sortColors(int nums[], int n)
{

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}

// using counting of 0s , 1s and 2s

// void sortColors(int a[], int size)
// {
//     int cnt0 = 0, cnt1 = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] == 0)
//             cnt0++;
//         if (a[i] == 1)
//             cnt1++;
//     }
//     for (int i = 0; i < size; i++)
//         if (i < cnt0)
//             a[i] = 0;
//         else if (i < cnt0 + cnt1)
//             a[i] = 1;
//         else
//             a[i] = 2;
//     return;
// }

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    sortColors(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}