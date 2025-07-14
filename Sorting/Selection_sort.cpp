/*
***************************************************
                SELECTION SORT
***************************************************

$ Probelm : Sort an array in ascending order using Selection Sort.

$ Example: 
  Input :  {2,1,4,3} or {1,2,3,4}
  Output : {1,2,3,4}

$ Approach :
- for every positin 'i' find the smallest element from the unsorted
  portion of the array and swap it with 'arr[i]'.
  
$ Time Complexity : O(n^2)
$ Space Complexity : O(1)-- In-place sort


$ Status: Tested
$ Author: Mihir Kumar
$ Date: 13 July 2025
$ Tags: Sorting , Array , Selection Sort



*/


#include<iostream>
using namespace std;

int main(){
    int size=10;
    int arr[]={2,1,0,2,1,3,1,0,4,1};

    for(int i=0;i<=size-1; i++)
    {
        int minIndex=i;

        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        //swap min with arr[i]
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }

    //printing sorted array
    cout<<"Sorted Array: ";
    for(int i=0;i<=size-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}