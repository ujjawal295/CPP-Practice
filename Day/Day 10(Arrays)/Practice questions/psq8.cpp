#include <iostream>
using namespace std;

void maxSubArraySum(int arr[],int n)
{
    int maxSum=INT_MIN;
    for(int start=0;start<n;start++)
    { 
        for(int end=start;end<n;end++)
        {
            int currSum=0;
            for(int i=start;i<=end;i++)
            {
                currSum+=arr[i];
                maxSum=max(maxSum,currSum);
            }
        }   
    }
    cout<<"Max Sum :- "<<maxSum;   
}
void maxSubArraySum2(int arr[],int n)
{
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int currSum=0;
        for(int j=i;j<n;j++)
        {
           
            cout<<arr[j]<<",";
            currSum+=arr[j];
            cout<<currSum<<",";
            maxSum=max(currSum,maxSum);
            cout<<maxSum<<"  ";
        }
        cout<<endl;
    }
    cout<<"Maximum sum is :- "<<maxSum;
}

int main()
{
    int arr[]={3,1,-5,-17,-7,-6};
    int n = sizeof(arr)/sizeof(int);
    maxSubArraySum2(arr,n);
}