#include <iostream>
using namespace std;

bool dubEle(int arr[],int n, int arr1[])
{
    int count = 0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=arr[i];
        if(arr1[k]!=1)
            arr1[k]=1;
        else
            return true; 
    }
    return false;  
}

int main()
{
    int arr[]={-7,35,9,3,-7,2,8};
    int n=sizeof(arr)/sizeof(int);
    int arr1[100]={0};
    cout<<dubEle(arr,n,arr1);
    
}
