#include <iostream>
using namespace std;

int main()
{
    int arr[]={-4,-1,-1,0,1,2};
    int n=sizeof(arr)/sizeof(int);

    int i=0;
    while(i<n-1)
    {
        if(arr[i]!=arr[i+1])
            cout<<arr[i]<<" ";
        
        i++;
    }
}