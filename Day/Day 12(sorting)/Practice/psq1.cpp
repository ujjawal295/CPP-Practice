#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                
            }
            
        }
        cout<<arr[i];
    }
}

int main()
{
    int arr[]={2,5,3,4,9,6};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
}