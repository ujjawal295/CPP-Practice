#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    int sum=0;
    int min=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        min=arr[i]+min;
        arr[i]=sum-min;
        cout<<arr[i]<<" ";
    }
}