#include <iostream>
using namespace std;

int main()
{
    int arr[]={3,4,2,1,6,8};
    int n=sizeof(arr)/sizeof(int);

    if(n%2==0)
    {
        for(int i=0;i<n;i=i+2) // 0 2 4 6
        {
            swap(arr[i],arr[i+1]);
        }
    }
    else
    {
        for(int i=0;i<n-1;i=i+2)
        {
            swap(arr[i],arr[i+1]);
        }

    }
   

 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}