#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int si, int mid, int ei)
{
    vector<int> temp;
    int i= si;
    int j= mid+1;
    
    
    while(i<=mid && j<=ei)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while(j<=ei)
    {
        temp.push_back(arr[j++]);
    }

    for(int idx=si,i=0;idx<=ei;idx++)
    {
        arr[idx]=temp[i++];
    }
    
}

void mergeSort(int arr[], int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid = (si+ei)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);

    merge(arr,si,mid,ei);
}

void printArr(int arr[],int ei)
{
    for(int i=0;i<ei;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int arr[]= {3,2,45,22,1,5};
    int n = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
    printArr(arr,n);

}