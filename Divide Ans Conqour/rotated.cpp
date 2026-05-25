#include <iostream>
using namespace std;

int search(int arr[],int si,int ei, int tar)
{
    if(si>ei)
    {
        return -1;
    }
    int mid=(si+ei)/2;
    if(arr[mid]==tar)
    {
        return mid;
    }
    if(arr[si]<=arr[mid])
    {
        if(arr[si]<=tar&&tar<=arr[mid])
        {
            return search(arr,si,mid-1,tar);
        }
        else
        {
            return search(arr,mid+1,ei,tar);
        }
    }
    else
    {
        if(arr[mid]<=tar && tar<=arr[ei])
        {
            return search(arr,mid+1,ei,tar);
        }
        else
        {
            return search(arr,si,mid-1,tar);
        }
    }
}

int main()
{
    
   int  arr[]={41,51,61,9,11,21};
   int n= sizeof(arr)/sizeof(int);
   int tar=4;
   cout<<search(arr,0,n-1,tar);



}