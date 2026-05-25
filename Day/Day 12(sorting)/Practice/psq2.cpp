#include <iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<n;j++)
        {   
            if(arr[minIdx]>arr[j])
            {
                minIdx=j;  
            }
        }
        swap(arr[i],arr[minIdx]);
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int arr[]={3,2,5,4,1};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
}