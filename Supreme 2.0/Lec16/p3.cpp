// Binary Search
// Array Must Be Sorted
#include <bits/stdc++.h>
using namespace std;
// finds peak in a mountain array
int peakIndexInMountainArray(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int ans = n - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (mid != n - 1 && arr[mid] >= arr[mid + 1])
    {
      ans = mid;
      end = mid - 1; // move left
    }
    else
      start = mid + 1; // right
  }
  return ans;
}
// other approach-finds peak in a mountain array
int peakIndexInMountainArraySecond(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int ans = n - 1;
  while (start < end)//here when we are writing end= mid when a single  element is left then start=end=mid nfinite loop if arr[mid] >= arr[mid + 1]
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] < arr[mid + 1])
      start = mid + 1; // peak is definitely on right side
    else
      end = mid; // this element can be peak or peak on left side
  }
  return start;//return  end; will also work
}
// finds the missing element from an aray of elements from 1 to N
// return array size+1 if nothing is missing
int findmissingelement(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int ans = n + 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] - mid > 1)
    {
      ans = mid + 1;
      end = mid - 1;
    }
    else
      start = mid + 1;
  }
  return ans;
}

// finds the last occurrence of a number
int findloccurrence(int arr[], int n, int target)
{
  int start = 0;
  int end = n - 1;
  int ans = -1;
  while (start < end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  return ans == -1 ? -1 : ans + 1;
}

// finds the first occurrence of a number
int findfoccurrence(int arr[], int n, int target)
{
  int start = 0;
  int end = n - 1;
  int ans = -1;
  while (start < end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  return ans == -1 ? -1 : ans + 1;
}

// finds the total occurrence of a number
int findtotaloccurrence(int arr[], int n, int target)
{
  return findloccurrence(arr, n, target) - findfoccurrence(arr, n, target) + 1;
}

// Binary Search
int binarysearch(int arr[], int n, int target)
{
  int l = 0, r = 9;
  int mid;
  for (; l <= r;)
  {
    mid = l + (r - l) / 2;
    if (target == arr[mid])
      return mid + 1;

    else if (target > mid)
      l = mid + 1;
    else
      r = mid - 1;
  }
  return -1;
}
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int brr[11] = {1, 2, 2, 4, 5, 5, 7, 8, 9, 10, 11};
  int crr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
  int drr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << binarysearch(arr, 10, 5) << endl;
  cout << findfoccurrence(brr, 10, 5) << endl;
  cout << findloccurrence(brr, 10, 5) << endl;
  cout << findtotaloccurrence(brr, 10, 5) << endl;
  cout << findmissingelement(crr, 10) << endl;
  cout << findmissingelement(crr, 10) << endl; // special case when nothing is missing
  return 0;
}