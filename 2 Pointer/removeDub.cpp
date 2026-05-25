#include <iostream>
using namespace std;

int main()
{
    int arr[]= {1,1,2,2,3,3,3,4,4};
    int n=sizeof(arr)/sizeof(int);

    int i=0;
    int j=1;

    while(j<n)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            swap(arr[j],arr[i]);
            j++;
        }
        else{
            j++;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}