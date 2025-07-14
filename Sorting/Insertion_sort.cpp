/*
***************************************************
                INSERTION SORT
***************************************************

$ Probelm : Sort an array in ascending order using INSERTION Sort.

$ Example:
  Input :  {8,1,4,3} or {1,3,4,8}
  Output : {1,3,4,8}

$ Approach :
- Traverse from index i to n-1.
- For each element, insert it into the sorted portion to its left.

$ Time Complexity : O(n^2)
$ Space Complexity : O(1)-- In-place sort


$ Status: Tested
$ Author: Mihir Kumar
$ Date: 13 July 2025
$ Tags: Sorting , Array , Insertion Sort



*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[] = {5, 3, 6, 2, 1};

    for (int i = 0; i < size ; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            // swap adjacent until it does not get its sorted position
            if (arr[j-1] >arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else break;
        }
    }

    // printing sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}