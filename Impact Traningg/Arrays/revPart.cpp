#include <iostream>
using namespace std;

void revFun(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++,end--;
    }

}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);

    int k=2;
    if(k>n)
        k=k%2;

    revFun(arr,0,n-1);
    revFun(arr,0,k-1);
    revFun(arr,k,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
