// Every element occurs max 2 times
// Every no repeat it pairs only
// So if we have any odd element then it will occur only one time
// Suppose we have an array like
//  3 3 4 4 2 5 5 6 6
//  0 1 2 3 4 5 6 7 8
//  So we can observe before the odd element the the first number occurs on the even index and the 2nd number on odd index
//  But after the odd element the sequence changes
//  And the 1st element occurs on odd index and the second element occurs on even index
// So after finding the mid element to findout where we are standing we have to check the following conditions :
//  if (mid % 2 == 0) then
//  if (a[mid] == a[mid + 1]) then we are on the left side and we have to move to right by two i.e mid+2 becuase we have already checked the mid+1 element
//  else we are on the right or we are on the answer so we have to save the mid point also e = mid

// if (mid % 2 == 1) then
// if (a[mid] == a[mid - 1]) then we are on the left side and we have to move to right by one i.e mid+1 becuase we have not checked the mid+1 element yet
// else we are on the right and we have to move to left by 1 i.e mid - 1

#include <iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (s == e)
        {
            return mid;
        }

        if (mid & 1)
        {

            if (mid >= 0 && arr[mid - 1] == arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {

            if (mid < n && arr[mid + 1] == arr[mid])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }

        mid = s + (e - s) / 2;
    }
}

int main()
{

    int arr[] = {1, 3, 3, 4, 4, 5, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);


    int ansIndex = findOddOccuringElement(arr, n);

    cout << "Final Ans : " << arr[ansIndex] << endl;

    return 0;
}