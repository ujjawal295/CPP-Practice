#include <iostream>
using namespace std;

void maxSubarraySum(int arr[],int n)
{
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++)
    {   
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<=0)
        {
            currSum=0;
        }
    }
    cout<<"Maximum Sum :- "<<maxSum;
}
int main()
{
    int arr[]={-7,-4,-3,-1,-2,-14};
    int n=sizeof(arr)/sizeof(int);
    
    maxSubarraySum(arr,n);
}