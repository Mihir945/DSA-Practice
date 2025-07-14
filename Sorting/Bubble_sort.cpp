/*
***************************************************
                BUBBLE SORT
***************************************************

$ Probelm : Sort an array in ascending order using BUBBLE Sort.

$ Example:
  Input :  {8,1,4,3} or {1,3,4,8}
  Output : {1,3,4,8}

$ Approach :
- Repeatedly swap adjacent elements if they are in the wrong order.
- Largest element bubble to the end after each pass.

$ Time Complexity : O(n^2)
$ Space Complexity : O(1)-- In-place sort


$ Status: Tested
$ Author: Mihir Kumar
$ Date: 13 July 2025
$ Tags: Sorting , Array , Bubble Sort



*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[] = {5, 3, 6, 2, 1};

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j] & arr [j-1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //printing sorted array
    cout<<"Sorted Array: ";
    for(int i=0;i<=size-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}