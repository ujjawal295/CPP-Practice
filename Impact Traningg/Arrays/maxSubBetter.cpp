#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    int size = 3;
    int i=0,j=size;

    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum=arr[i]+sum;
    }
    int maxSum=0;
    while(j<n)
    {
        sum=(sum-arr[i++])+arr[j++];
        maxSum=max(sum,maxSum);    
    }
    cout<<maxSum;
  
}