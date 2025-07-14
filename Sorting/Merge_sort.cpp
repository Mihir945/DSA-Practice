/*
***************************************************
                  MERGE SORT
***************************************************

$ Probelm : Sort an array in ascending order using Merge Sort algorithm.

$ Example:
  Input :  {8,1,4,3} or {1,3,4,8}
  Output : {1,3,4,8}

$ Approach :
- Divide the array recursively into two halves
- Merge the sorted halves using an auxiliary array

$ Time Complexity : O(nlogn)
$ Space Complexity : O(n)


$ Status: Tested
$ Author: Mihir Kumar
$ Date: 14 July 2025
$ Tags: Sorting , Merge Sort , Divide and Conquer



*/

#include <iostream>
using namespace std;

class Solution{
    public:

    void merge(int arr[],int start,int mid,int end)
    {
        int *ans=new int[end-start+1];
        int first=start,second=mid+1,pos=0;

        while(first<=mid &&second<=end)
        {
            if(arr[first]<=arr[second])
             ans[pos++]=arr[first++];
            else
             ans[pos++]=arr[second++]; 
        }

        while(first<=mid)
          ans[pos++]=arr[first++];
        while(second<=end)
          ans[pos++]=arr[second++];
      
          pos=0; 
          for(int i=start;i<end; i++)
             arr[i]=ans[pos++];

          delete[]ans;   


    }
    void mergesort(int arr[],int start, int end){
        if(start>=end)
        return;

        int mid=start+(end-start)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
};

int main()
{
   int arr[]={ 5,3,8,6,2,7};
   int n= sizeof(arr)/sizeof(arr[0]);

   Solution obj;
   obj.mergesort(arr,0,n-1);

   cout<<"Sorted Array: ";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   return 0;
}