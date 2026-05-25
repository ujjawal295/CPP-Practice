#include <iostream>
#include <vector>
using namespace std;

void posnegArr(int arr[],int n)
{
    int arr1[]={};
    int pos=0,neg=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            arr1[pos]=arr[i];
            pos=pos+2;
        }
        else
        {
            arr1[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<",";
    }
    
}

int main()
{
    int arr[] ={1,-2,-3,2,-9,-1,8,4};
    int n=sizeof(arr)/sizeof(int);
    posnegArr(arr,n);
    
}