#include <iostream>
using namespace std;

bool isSorted(int arr[],int n, int i)
{
    if(i == n-1)
    {
        return true;
    }
    if(arr[i]>arr[i+1])
    {
        return false;
    }
    return isSorted(arr,n,i+1);
}

int main()
{
    int n=5;
    int i=0;
    int arr1[]={1,3,4,5,6};
    int arr2[]={2,13,34,35,45};

    cout<<isSorted(arr2,n,i);
}