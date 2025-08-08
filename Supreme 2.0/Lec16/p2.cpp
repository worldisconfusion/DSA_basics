// Find Missing Element in a Sorted Array
// Array Must Be Sorted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 7, 8, 9, 10};      // missing 6
    int brr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11}; // missing 9
    int l = 0, r = (sizeof(arr) / sizeof(arr[0]));
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] - mid == 2)
        {
            ans = mid + 1;
            r = mid - 1;
        }
        else if (arr[mid] - mid == 1)
            l = mid + 1;
    }
    cout << ans;
    return 0;
}