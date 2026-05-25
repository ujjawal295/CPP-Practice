#include <iostream>
using namespace std;

int lastOcc(int arr[],int n,int i, int tar)
{
    if(i==n)
        return -1;
    int idxfound=lastOcc(arr,n,i+1,tar);
    if(idxfound == -1 && tar==arr[i])
    {
        return i;
    }
    return idxfound;  
}
int main()
{
    int arr[]={3,5,6,6,7,8};
    int arr1[]={3,5,7,7,7,8};
    int n=6;
    int i=0;
    int target=7;
    cout<<lastOcc(arr1,n,i,target);
}