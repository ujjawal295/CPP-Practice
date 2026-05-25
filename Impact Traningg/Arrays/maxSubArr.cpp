#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    int size = 3;
    int i=0,j=3-1;

    int maxSum=0;

    while(j<n)
    {
        int sum=0;
        for(int k=i;k<=j;k++)
        {
            sum=arr[k]+sum;
        }
        maxSum=max(sum,maxSum);
        i++,j++;

    }
    cout<<maxSum;
  
}