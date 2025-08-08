// PLAYING WITH 2D ARRAY

//!!REMEMBER!!
// ATLEAST DEFINE COULMN SIZE FOR 2D ARRAY FOR BOTH INITIALIZATION AND PASSING INTO FUNCTION

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][4], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return;
}

void printArray_column_wise(int arr[][4], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return;
}
void findmin(int arr[][4], int row, int col)
{
  int min = INT_MAX;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      if (arr[i][j] < min)
        min = arr[i][j];
  cout << min;
  return;
}
void findmax(int arr[][4], int row, int col)
{
  int max = INT_MIN;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      if (arr[i][j] > max)
        max = arr[i][j];
  cout << max;
  return;
}
void findtarget(int arr[][4], int row, int col, int target)
{
  int max = INT_MIN;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      if (arr[i][j] == target)
      {
        cout << "Target Found!!";
        return;
      }
  cout << "Target Not Found !!";
  return;
}

void Row_Wise_Sum_Array(int arr[][4], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
    cout << sum << " ";
  }
  return;
}

void Column_Wise_Sum_Array(int arr[][4], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int j = 0; j < row; j++)
    {
      sum += arr[j][i];
    }
    cout << sum << " ";
  }
  return;
}

void transpose_Array(int arr[][4], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < i; j++)
      swap(arr[i][j], arr[j][i]);
  }
  printArray(arr, row, col);
  return;
}
void take_input(int arr[][4],int row, int col){
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
      cin>>arr[i][j];
  }
printArray(arr, row, col);
  return;
}
int main()
{
  // int rows, cols;
  // cout << "Enter rows and columns: ";
  // cin >> rows >> cols;

  // // Step 1: Create array of row pointers
  // int** arr = new int*[rows];

  // // Step 2: Create each row
  // for(int i = 0; i < rows; i++) {
  //     arr[i] = new int[cols];
  // }

  // // Initialize with values
  // int value = 1;
  // for(int i = 0; i < rows; i++) {
  //     for(int j = 0; j < cols; j++) {
  //         arr[i][j] = value++;
  //     }
  // }

  // initialize 2D array

  int arr[3][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // like 1D vector initialization
  int brr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  // rows can be undefined
  int crr[][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        int square_array[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13,14,15,16}};

  //   Wrong columns must be defined

  //     int drr[][]={
  //     {1,2,3,4},{5,6,7,8},{9,10,11,12}
  //   };

  //   Wrong columns must be defined

  //     int err[3][]={
  //     {1,2,3,4},{5,6,7,8},{9,10,11,12}
  //   };

  // ATLEAST DEFINE COULMN SIZE FOR 2D ARRAY
  // WHY?
  // for converting 2D array to 1D array we need the formula (number_of_columns*outer_loopingg_variable)+inner_looping_variable  for zero based indexing
  //for 1based indexing,converting 2D array to 1D array we need the formula, 1D_index = (number_of_columns * (row_index - 1)) + (column_index - 1)

  printArray(arr, 3, 4);
  cout << endl;
  printArray_column_wise(arr, 3, 4);
  cout << endl;
  findmin(arr, 3, 4);
  cout << endl;
  findmax(arr, 3, 4);
  cout << endl;
  findtarget(arr, 3, 4, 7);
  cout << endl;
  Row_Wise_Sum_Array(arr, 3, 4);
  cout << endl;
  Column_Wise_Sum_Array(arr, 3, 4);
  cout << endl;
  transpose_Array(square_array, 4, 4);
  cout << endl;
  take_input(arr, 3, 4);
  cout << endl;






//Using vector for 2D array
vector<vector<int>>vrr(5,vector<int>(10,0));//5 rows each with a vector having 10 elements inbitialised to zero
for(int i=0;i<vrr.size();i++){
  for(int j=0;j<vrr[i].size();j++)
    cout<<vrr[i][j]<<" ";
    cout<<endl;
}
//Jagged array different column sizes for each row
int r,c,t;
cout<<"Enter number of rows : ";
cin>>r;
vector<vector<int>>jarr;
for(int i=0;i<r;i++){
cout<<"Enter size for row "<<i+1<<" : ";
cin>>c;
cout<<"Enter elements : "<<endl;
vector<int>temp;
for(int j=0;j<c;j++){
cin>>t;
temp.push_back(t);
}
jarr.push_back(temp);
}
for(int i=0;i<jarr.size();i++){
  for(int j=0;j<jarr[i].size();j++)
    cout<<jarr[i][j]<<" ";
    cout<<endl;
}
return 0;
}