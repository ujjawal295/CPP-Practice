#include <iostream>
using namespace std;

int main()
{
    int arr[]={2,5,1,3,4,7};
    int temp[6];
    int n=sizeof(arr)/sizeof(int);
    

    int mid=n/2;

    int i=0;
    int j=mid;
    for(int k=0;k<n;k++)
    {
        //cout<<arr[i]<<" ";
        temp[k++]=arr[i++];
        //cout<<arr[j]<<" ";
        
        temp[k]=arr[j++];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }

}