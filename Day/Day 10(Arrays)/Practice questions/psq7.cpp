#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int start=0;start<n;start++)
    {
        //cout<<arr[i]<<" ";
        for(int end=start;end<n;end++)
        {
            cout<<"("<<arr[start]<<","<<arr[end]<<")";
            // int i=start;
            // while(i<=end)
            // {
            //     cout<<arr[i];
            //     i++;
            // }
            // cout<<", ";
        }
         
        cout<<endl;
    }
}
int main()
{

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printArray(arr,n);
    
}