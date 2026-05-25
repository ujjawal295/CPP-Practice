#include <iostream>
using namespace std;

int partition(int arr[],int si,int ei)
{
    int i = si-1;
    int pivot = arr[ei];

    for(int j=si;j<ei;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        } 
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}


void quickSort(int arr[], int si, int ei)
{
    if(si>=ei)
    {
        return;
    }
    int pi=partition(arr,si,ei);

    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);

}


void printArr(int arr[],int ei)
{
    int i=0;
    while(i<ei)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}

int main()
{
    int arr[]= {6,3,9,2,5,7};
    int n= sizeof(arr)/sizeof(int);

    quickSort(arr,0,n-1);
    printArr(arr,n);

}