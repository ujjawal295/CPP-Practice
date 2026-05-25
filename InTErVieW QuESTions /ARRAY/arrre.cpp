#include <iostream>
using namespace std;

void revArr(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(j>i)
    {
        swap(arr[i],arr[j]);
        i++,j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
}

int main()
{
    int arr[]={8,3,2,5,9,3,7};
    int n=sizeof(arr)/sizeof(int);
    revArr(arr,n);
    
}