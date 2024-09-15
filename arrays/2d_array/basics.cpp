#include <iostream>
#include <limits.h>
#include<vector>
using namespace std;

void printArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void colwise(int arr[][4], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

bool findTarget(int arr[][4], int row, int col, int target)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
        cout << endl;
    }

    return false;
}

int findMax(int arr[][4], int row, int col)
{

    int maxAns = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
        cout << endl;
    }

    return maxAns;
}

int findMin(int arr[][4], int row, int col)
{

    int minAns = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minAns)
            {
                minAns = arr[i][j];
            }
        }
        cout << endl;
    }

    return minAns;
}

void findRowSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of row " << i << " is : " << sum << endl;
    }
}

void findColSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Sum of column " << i << " is : " << sum << endl;
    }
}

void findDiagonalSum(int arr[][3], int col)
{

    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum += arr[i][i];
    }
    cout << "The sum of diagonal is : " << sum << endl;
}

void printRightToLeftDiagonal(int arr[][3],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        
        for (int j = col - 1 - i; j >= col - 1 - i; j--)
        {
            cout<<arr[i][j]<<endl;
        }
        
    }
    
}


void TransposeMatrix(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            // int temp = arr[i][j];
            // arr[i][j] = arr[j][i];
            // arr[j][i] = temp;
            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }
}

int main()
{
    // create a 2D array
    // int arr[3][3];

    // iniitialse
    //   int arr[3][4] = {
    //   {1,2,3,4},
    //   {5,6,7,8},
    //   {9,10,1,11}
    //   };

    // int brr[] = {1, 2, 3, 4};

    // int crr[][4]; //not allowed if not inititalized with values

    // valid
    // int drr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 1, 11}};

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 1, 11}};

    // int row = 3;
    // int col = 4;
    // printArray(arr, row, col);
    // colwise(arr, row, col);

    // INPUT
    //  int ar1[3][3];
    //  int row1 = 3;
    //  int col1 = 3;

    // for(int i = 0 ; i < row1 ; i++){
    //     for(int j = 0 ; j < col1 ; j++){
    //         cout<<"Enter the value for row index : "<<i<<" and column index : "<<j<<endl;
    //         cin>>ar1[i][j];
    //     }
    // }

    // printArray(ar1, row1, col1);

    // int drr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 1, 11}};

    // int row = 3;
    // int col = 4;
    // int target = 11;

    // bool result = findTarget(drr, row, col, target);

    // if(result == 1){
    //     cout<<"Target Found";
    // }
    // else{
    //     cout<<"Target Not Found";
    // }

    // cout<<"The maximum number is : "<<findMax(drr , row, col)<<endl;
    // cout<<"The maximum number is : "<<findMin(drr , row, col)<<endl;

    // findRowSum(drr, row, col);

    // findColSum(drr, row, col);

    // int ar2[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // findDiagonalSum(ar2, 3);

    // printRightToLeftDiagonal(ar2, 3, 3);

    // TransposeMatrix(ar2, 3, 3);

    // printArray(ar2, 3, 3);

    //2D ARRAY USING VECTOR

    // vector<vector<int> > arr(5, vector<int>(10,0));

    // for(int i = 0 ; i < arr.size() ; i++){
    //     for(int j = 0 ; j < arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Jagged array

    // vector<vector<int> > brr;

    // vector<int> vec1(10,0);
    // vector<int> vec2(9,1);
    // vector<int> vec3(8,2);
    // vector<int> vec4(7,3);

    // brr.push_back(vec1);
    // brr.push_back(vec2);
    // brr.push_back(vec3);
    // brr.push_back(vec4);

    // for(int i = 0 ; i < brr.size() ; i++){
    //     for(int j = 0 ; j < brr[i].size(); j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<brr.size();

    return 0;
}